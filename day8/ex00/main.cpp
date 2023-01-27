/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/05/02 11:43:14 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "easyfind.hpp"

int main( void )
{
	std::vector<int>	a(10);
	int					i;
	int					tmp;
	int					index;

	std::cout << std::endl;
	std::cout << "\e[1;31mVector<int> of size 10, filling it with values from 8 to 17 included\e[0m" << std::endl;
	std::cout << "\e[1;31mUsing iterators to do so\e[0m" << std::endl;

	i = 0;
	for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
	{
		*it = i + 8;
		std::cout << "[" << i << "]: " << *it << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << "\e[1;31mAttempting to find value '20' in the vector, which isn't there\e[0m" << std::endl;

	try
	{
		index = 20;
		tmp = easyfind(a, index);
		std::cout << "index of '" << index << "': " << tmp << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
		std::cerr << "easyfind() exception: Cannot find value" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[1;31mAttempting to find value '13' in the vector, which is there\e[0m" << std::endl;

	try
	{
		index = 13;
		tmp = easyfind(a, index);
		std::cout << "index of '" << index << "': " << tmp << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
		std::cerr << "easyfind() exception: Cannot find value" << std::endl;
	}
	return (0);
}