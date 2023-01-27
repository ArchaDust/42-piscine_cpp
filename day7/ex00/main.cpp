/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/29 13:35:39 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	int	ptrA = 42;
	int ptrB = 69;

	std::cout << "&ptrA = " << &ptrA << ", &ptrB = " << &ptrB << std::endl;
	std::cout << "&min( a, b ) = " << &::min( ptrA, ptrB ) << std::endl;
	std::cout << "&max( a, b ) = " << &::max( ptrA, ptrB ) << std::endl;

	return (0);
}