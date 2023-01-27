/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:20:37 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:39:31 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	
}

Point::Point(float const xc, float const yc) : _x(xc), _y(yc)
{
	
}

Point::Point(const Point& from) : _x(from._x), _y(from._y)
{
	
}

Point::~Point()
{
	
}

Point &Point::operator=(const Point&)
{
	return (*this);
}

float	Point::getFloatX(void) const
{
	return (_x.toFloat());
}

float	Point::getFloatY(void) const
{
	return (_y.toFloat());
}

float	Point::sign(Point const a, Point const b, Point const c)
{
	float	s1;
	float	s2;

	s1 = (a.getFloatX() - c.getFloatX()) * (b.getFloatY() - c.getFloatY());
	s2 = (b.getFloatX() - c.getFloatX()) * (a.getFloatY() - c.getFloatY());
	return (s1 - s2);
}

std::ostream	&operator<<(std::ostream& os, const Point& from)
{
	os << "Point {x" << from.getFloatX() << ", y" << from.getFloatY() << "}";
	return (os);
}
