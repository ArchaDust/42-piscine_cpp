/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/29 13:38:04 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void	print_int(int &n)
{
	std::cout << n << std::endl;
}

void	print_int_timestwo(int &n)
{
	std::cout << n * 2 << std::endl;
}

void	putchar(char &c)
{
	std::cout << c;
}

int main( void )
{
	int		array[4] = {0, 1, 2, 3};
	char	str[7] = {'f', 'r', 'o', 'm', 'a', 'g', 'e'};

	std::cout << std::endl;
	std::cout << "\e[1;31mInt Array as Int\e[0m" << std::endl;

	iter(array, 4, print_int);

	std::cout << std::endl;
	std::cout << "\e[1;31mInt Array as Int * 2\e[0m" << std::endl;
	
	iter(array, 4, print_int_timestwo);

	std::cout << std::endl;
	std::cout << "\e[1;31mC-style string as Char\e[0m" << std::endl;
	
	iter(str, 7, putchar);
	putchar('\n');

	std::cout << std::endl;
	std::cout << "\e[1;31mC-style string as Hexadecimal\e[0m" << std::endl;

	iter(str, 7, printAsHex);
	std::cout << std::endl;

	return (0);
}