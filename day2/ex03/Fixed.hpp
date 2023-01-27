/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:06:18 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/07 16:16:56 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
		public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed&);

	Fixed(const int a);
	Fixed(const float a);
	
	// converts
	float	toFloat(void) const;
	int 	toInt(void) const;

	// setter & getters
	int		getRawBits(void) const;
	void	setRawBits(int newVal);

	// min and max
	static Fixed		&min(Fixed& a, Fixed& b);
	static const Fixed	&min(const Fixed& a, const Fixed& b);
	static Fixed		&max(Fixed& a, Fixed& b);
	static const Fixed	&max(const Fixed& a, const Fixed& b);

	// operators: comparison
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	// operators: arithmetic
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	// operators: increment
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

		private:
	int					_val;
	const static int	_bits;
};

std::ostream	&operator<<(std::ostream& os, const Fixed& from);

#endif