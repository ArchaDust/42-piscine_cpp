/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:10:15 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 09:55:58 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	std::cout << "\e[32mFixed::Fixed() Default\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed& from)
{
	std::cout << "\e[32mFixed::Fixed() Copy\e[0m" << std::endl;
	_val = from.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "\e[33mFixed::~Fixed()\e[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& from)
{
	std::cout << "Fixed::operator=()" << std::endl;
	_val = from.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "Fixed::getRawBits()" << std::endl;
	return (_val);
}

void	Fixed::setRawBits(int newVal)
{
	std::cout << "Fixed::setRawBits()" << std::endl;
	_val = newVal;
}