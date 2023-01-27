/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/05/02 11:57:51 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

#define SIZE 8
#define STRESS_SIZE 100000

int	myRand(void) // generates values from -2^23 to 2^23-1
{
	return (std::rand() % 0xFFFFFF - 0x800000);
}

void stressTest(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mNow Lets Stress Test with 100,000 values\e[0m" << std::endl;

	std::vector<int>	v(STRESS_SIZE);
	Span				s(STRESS_SIZE);

	std::srand(std::time(0));

	std::generate(v.begin(), v.end(), myRand);

	try
	{
		s.addNumber(v.begin(), v.end());
	}
	catch (Span::CapacityException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[1;31mLongest Span\e[0m" << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mShortest Span\e[0m" << std::endl;
	std::cout << s.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mNot gonna display the entire Span this time but feel free to uncomment me if you wanna see\e[0m" << std::endl;
	//std::cout << s << std::endl;
}

int main( void )
{
	std::vector<int>	v(SIZE);
	Span				s(10);

	std::cout << std::endl;
	std::cout << "\e[1;31mCreating a Span of 10, and a Vector of 8\e[0m" << std::endl;
	std::cout << "\e[1;31mFilling Vector with 8 values from 1 to (1 + 2 * i)\e[0m" << std::endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		v[i] = 1 + i * 2;
	}
	
	std::cout << std::endl;
	std::cout << "\e[1;31mWe now fill Span from Vector with the help of iterators\e[0m" << std::endl;
	std::cout << "\e[1;31mIn this case, we won't trigger the CapacityException, but this can be done by changing the SIZE constant\e[0m" << std::endl;

	try
	{
		// This will loop through vector v until we reached its end OR we hit capacity
		// It used to stop if it had not enough space for the whole container but I changed that
		s.addNumber(v.begin(), v.begin() + SIZE);
	}
	catch (Span::CapacityException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[1;31mThen we add 4 values, but only two will fit with SIZE 8, so we'll throw an Exception\e[0m" << std::endl;

	try
	{
		s.addNumber(55);
		s.addNumber(569);
		// last two should fail if we keep SIZE at 8
		s.addNumber(101);
		s.addNumber(200);
	}
	catch (Span::CapacityException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[1;31mLongest Span\e[0m" << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mShortest Span\e[0m" << std::endl;
	std::cout << s.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mDisplaying the entire Span\e[0m" << std::endl;
	std::cout << s << std::endl;

	stressTest();

	return (0);
}