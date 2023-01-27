/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:06:18 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/07 16:15:14 by aberneli         ###   ########.fr       */
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

		private:
	int					_val;
	const static int	_bits;
};

std::ostream	&operator<<(std::ostream& os, const Fixed& from);

#endif