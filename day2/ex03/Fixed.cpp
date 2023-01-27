/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:10:15 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/07 16:16:51 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	
}

Fixed::Fixed(const Fixed& from)
{
	_val = from.getRawBits();
}

Fixed::~Fixed()
{
	
}

Fixed &Fixed::operator=(const Fixed& from)
{
	_val = from.getRawBits();
	return (*this);
}

Fixed::Fixed(const int a)
{
	_val = (a << _bits);
}

Fixed::Fixed(const float a)
{
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

Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (_val > other._val);
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (_val < other._val);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (_val >= other._val);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (_val <= other._val);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (_val == other._val);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (_val != other._val);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	res;

	res._val = _val + other._val;
	return (res);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	res;

	res._val = _val - other._val;
	return (res);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	res;
	int64_t	tmp;

	tmp = ((int64_t)_val * (int64_t)other._val) >> _bits;
	res._val = (int)tmp;
	return (res);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	res;
	int64_t	tmp;

	tmp = (int64_t)_val * (1 << _bits) / (int64_t)other._val;
	res._val = (int)tmp;
	return (res);
}

Fixed	&Fixed::operator++(void)
{
	++_val;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	--_val;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	
	--*this;
	return (tmp);
}

std::ostream	&operator<<(std::ostream& os, const Fixed& from)
{
	os << from.toFloat();
	return (os);
}