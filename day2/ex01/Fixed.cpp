/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:10:15 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 09:56:03 by aberneli         ###   ########.fr       */
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
	std::cout << "\e[31mFixed::~Fixed()\e[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& from)
{
	std::cout << "Fixed::operator=()" << std::endl;
	_val = from.getRawBits();
	return (*this);
}

Fixed::Fixed(const int a)
{
	std::cout << "\e[32mFixed::Fixed() Int\e[0m" << std::endl;
	_val = (a << _bits);
}

Fixed::Fixed(const float a)
{
	std::cout << "\e[33mFixed::Fixed() Float\e[0m" << std::endl;
	_val = roundf(a * (1 << _bits));
}
	
float	Fixed::toFloat(void) const
{
	return ((float)_val / (float)(1 << _bits));
}

int 	Fixed::toInt(void) const
{
	return (_val >> _bits);
}

int		Fixed::getRawBits(void) const
{
	return (_val);
}

void	Fixed::setRawBits(int newVal)
{
	_val = newVal;
}

std::ostream	&operator<<(std::ostream& os, const Fixed& from)
{
	os << from.toFloat();
	return (os);
}