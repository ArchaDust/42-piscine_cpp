/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:00:53 by aberneli          #+#    #+#             */
/*   Updated: 2022/03/31 00:23:57 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	tmp;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		tmp = argv[i];
		for (std::string::iterator it = tmp.begin(); it != tmp.end(); ++it)
			*it = toupper(*it);
		std::cout << tmp;
		if (i < argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (0);
}
