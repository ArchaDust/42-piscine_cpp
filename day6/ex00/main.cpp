/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/27 14:41:54 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>

int	fromChar(std::string in)
{
	char	c;

	if (in.size() != 1)
		return (0);
	
	c = in[0];

	std::cout << "Detected litteral: Char" << std::endl;
	if (std::isprint(c))
		std::cout << "Char : " << c << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	
	std::cout << "Int : " << static_cast<int>(c) << std::endl;
	std::cout << "Float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "Double : " << static_cast<double>(c) << ".0" << std::endl;

	return (1);
}

int	fromDouble(std::string in)
{
	double	d;
	char	c;
	float	f;
	int		i;

	d = std::atof(in.c_str());

	if (in == "nan" || in == "inf" || in == "-inf" || isinf(d) || isnan(d))
	{
		std::cout << "Detected litteral: Double" << std::endl;
		std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : Impossible" << std::endl;
		std::cout << "Float : " << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "Double : " << d << std::endl;
		return (1);
	}

	if (in.find_first_of('.') == std::string::npos && in.find_first_of('e') == std::string::npos)
		return (0);

	c = static_cast<char>(d);
	f = static_cast<float>(d);
	i = static_cast<int>(d);

	std::cout << "Detected litteral: Double" << std::endl;
	if (d > 255 || d < 0)
		std::cout << "Char : Impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "Char : " << c << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "Int : Impossible" << std::endl;
	else
		std::cout << "Int : " << i << std::endl;
	std::cout << "Float : " << f << "f" << std::endl;
	std::cout << "Double : " << d << std::endl;
	return (1);
}

int	fromFloat(std::string in)
{
	double	d;
	char	c;
	float	f;
	int		i;

	f = static_cast<float>(std::atof(in.c_str()));

	if (in == "nan" || in == "inf" || in == "-inf")
		return (0);
	if (in == "nanf" || in == "inff" || in == "-inff")
	{
		std::cout << "Detected litteral: Float" << std::endl;
		std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : Impossible" << std::endl;
		std::cout << "Float : " << f << 'f' << std::endl;
		std::cout << "Double : " << static_cast<float>(f) << std::endl;
		return (1);
	}

	if (in.find_first_of('f') == std::string::npos)
		return (0);

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	std::cout << "Detected litteral: Float" << std::endl;
	if (f > 255 || f < 0)
		std::cout << "Char : Impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "Char : " << c << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "Int : Impossible" << std::endl;
	else
		std::cout << "Int : " << i << std::endl;
	std::cout << "Float : " << f << "f" << std::endl;
	std::cout << "Double : " << d << std::endl;
	return (1);
}

int	fromInt(std::string in)
{
	char	c;
	float	f;
	double	d;
	long long int	il;
	int		i;

	if (in == "nanf" || in == "inff" || in == "-inff")
		return (0);
	if (in == "nan" || in == "inf" || in == "-inf")
		return (0);
	if (in.find_first_of('.') != std::string::npos || in.find_first_of('f') != std::string::npos || in.find_first_of('e') != std::string::npos)
		return (0);
	
	il = std::atol(in.c_str());

	if (il > INT_MAX || il < INT_MIN)
		return (0);

	i = static_cast<int>(il);

	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	std::cout << "Detected litteral: Int" << std::endl;
	if (i > 255 || i < 0)
		std::cout << "Char : Impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "Char : " << c << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	std::cout << "Int : " << i << std::endl;
	std::cout << "Float : " << f << ".0f" << std::endl;
	std::cout << "Double : " << f << ".0" << std::endl;
	
	return (1);
}


int	main(int argc, char **argv)
{
	std::string	in;

	if (argc != 2)
	{
		std::cerr << "Error: Requires one argument." << std::endl;
		return (1);
	}

	in = argv[1];

	if (fromChar(in))
		return (0);
	
	for (std::string::iterator it = in.begin(); it != in.end(); ++it)
	{
		*it = std::tolower(*it);
	}

	if (fromInt(in))
		return (0);
	
	if (fromFloat(in))
		return (0);
		
	if (fromDouble(in))
		return (0);

	std::cout << "Detected litteral: None" << std::endl;
	std::cout << "Char : Impossible" << std::endl;
	std::cout << "Int : Impossible" << std::endl;
	std::cout << "Float : Impossible" << std::endl;
	std::cout << "Double : Impossible" << std::endl;

	return (0);
}