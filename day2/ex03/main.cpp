/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:05:56 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 10:15:10 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	insideTest(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mInsideTest:\e[0m" << std::endl;

	Point	a(0.0, 0.0);
	Point	b(10.0, 0.0);
	Point	c(0.0, 10.0);
	
	Point	pt(2.69, 3.27);

	std::cout << "Triangle abc: " << a << " " << b << " " << c << std::endl;
	std::cout << std::endl;

	std::cout << "Point pt: " << pt << std::endl;
	std::cout << "bsp(a, b, c, pt) = " << bsp(a, b, c, pt) << std::endl;
}

void	outsideTest(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mOutsideTest:\e[0m" << std::endl;

	Point	a(0.0, 0.0);
	Point	b(10.0, 0.0);
	Point	c(0.0, 10.0);
	
	Point	pt(10.0, 8.0);

	std::cout << "Triangle abc: " << a << " " << b << " " << c << std::endl;
	std::cout << std::endl;

	std::cout << "Point pt: " << pt << std::endl;
	std::cout << "bsp(a, b, c, pt) = " << bsp(a, b, c, pt) << std::endl;
}

void	trickyTest(void)
{
	std::cout << std::endl;
	std::cout << "\e[31mTrickyTest:\e[0m" << std::endl;

	Point	a(0.0, 0.0);
	Point	b(10.0, 0.0);
	Point	c(0.0, 10.0);
	
	Point	pt(5.0, 5.0);

	std::cout << "Triangle abc: " << a << " " << b << " " << c << std::endl;
	std::cout << std::endl;

	std::cout << "Point pt: " << pt << std::endl;
	std::cout << "bsp(a, b, c, pt) = " << bsp(a, b, c, pt) << std::endl;
}

int	main(void)
{
	insideTest();
	outsideTest();
	trickyTest();
	
	return (0);
}