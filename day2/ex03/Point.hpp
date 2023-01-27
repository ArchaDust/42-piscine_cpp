/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:20:25 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/07 16:25:27 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
		public:
	Point();
	Point(float const xc, float const yc);
	Point(const Point&);
	~Point();
	
	// setters & getters
	float	getFloatX(void) const;
	float	getFloatY(void) const;

	// maths
	static float	sign(Point const a, Point const b, Point const c);

		private:
	Fixed const _x;
	Fixed const _y;

	Point &operator=(const Point&);
};

std::ostream	&operator<<(std::ostream& os, const Point& from);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif