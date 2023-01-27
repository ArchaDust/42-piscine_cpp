/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:05:56 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 10:06:38 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	minMax(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mMin and Max:\e[0m" << std::endl;

	Fixed a = Fixed(10.5f);
	Fixed b = Fixed(42.69f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Fixed::min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "Fixed::max(a, b) = " << Fixed::max(a, b) << std::endl;
}

void	minMaxConst(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mMin and Max Const:\e[0m" << std::endl;
	
	const Fixed ca = Fixed(606.27f);
	const Fixed cb = Fixed(-203.14f);

	std::cout << "ca = " << ca << std::endl;
	std::cout << "cb = " << cb << std::endl;
	std::cout << "Fixed::min(ca, cb) = " << Fixed::min(ca, cb) << std::endl;
	std::cout << "Fixed::max(ca, cb) = " << Fixed::max(ca, cb) << std::endl;
}

void	comparison(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mComparison:\e[0m" << std::endl;

	Fixed a = Fixed(10.5f);
	Fixed b = Fixed(42.69f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a >= b =  " << (a >= b) << std::endl;
	std::cout << "a > b  =  " << (a > b) << std::endl;
	std::cout << "a <= b =  " << (a <= b) << std::endl;
	std::cout << "a < b  =  " << (a < b) << std::endl;
	std::cout << "a == b =  " << (a == b) << std::endl;
	std::cout << "a != b =  " << (a != b) << std::endl;

	std::cout << std::endl;

	Fixed c = Fixed(6.6f);
	Fixed d = Fixed(6.6f);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "c >= d =  " << (c >= d) << std::endl;
	std::cout << "c > d  =  " << (c > d) << std::endl;
	std::cout << "c <= d =  " << (c <= d) << std::endl;
	std::cout << "c < d  =  " << (c < d) << std::endl;
	std::cout << "c == d =  " << (c == d) << std::endl;
	std::cout << "c != d =  " << (c != d) << std::endl;
}

void	operations(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mOperations:\e[0m" << std::endl;

	Fixed a = Fixed(10.5f);
	Fixed b = Fixed(42.69f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b =  " << a + b << std::endl;
	std::cout << "a - b =  " << a - b << std::endl;
	std::cout << "a * b =  " << a * b << std::endl;
	std::cout << "a / b =  " << a / b << std::endl;


	std::cout << std::endl;

	a = Fixed(0);
	b = Fixed(0);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "++a =  " << ++a << std::endl;
	std::cout << "a++ =  " << a++ << std::endl;
	std::cout << "a   =  " << a << std::endl;
	std::cout << "--b =  " << --b << std::endl;
	std::cout << "b-- =  " << b-- << std::endl;
	std::cout << "b   =  " << b << std::endl;
}

int	main(void)
{
	minMax();
	minMaxConst();
	comparison();
	operations();
	
	return (0);
}