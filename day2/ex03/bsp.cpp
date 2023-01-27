/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:53:35 by aberneli          #+#    #+#             */
/*   Updated: 2022/03/28 14:44:10 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1;
	float	d2;
	float	d3;
	bool	pos;
	bool	neg;

	d1 = Point::sign(point, a, b);
	d2 = Point::sign(point, b, c);
	d3 = Point::sign(point, c, a);

	neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);
	
	return (!(neg && pos));
}