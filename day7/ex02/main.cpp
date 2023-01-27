/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/29 13:43:15 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Array.hpp>

#define MAX_VAL 10

int main2(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mTEST WITH CHAR TYPE\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mInit Array\e[0m" << std::endl;
	
    Array<char> numbers(MAX_VAL);
    char* mirror = new char[MAX_VAL];
    srand(time(NULL));

	std::cout << numbers << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mFilling Array\e[0m" << std::endl;
	
    for (int i = 0; i < MAX_VAL; i++)
    {
        const char value = rand() % 256;
        numbers[i] = value;
        mirror[i] = value;
    }

	std::cout << numbers << std::endl;
    //SCOPE
    {
		std::cout << std::endl;
		std::cout << "\e[1;31mCopy Constructor Test\e[0m" << std::endl;
	
        Array<char> tmp = numbers;
        Array<char> test(tmp);

		std::cout << tmp << std::endl;
		std::cout << test << std::endl;
    }

	std::cout << std::endl;
	std::cout << "\e[1;31mComparison of Array and saved Mirror\e[0m" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			delete[] mirror; // not in their original code
            return (1);
        }
    }
	std::cout << "Numbers and Mirror match" << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mBad index testing\e[0m" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << std::endl;
	std::cout << "\e[1;31mOverwriting array with new random values\e[0m" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 256;
    }

	std::cout << numbers << std::endl;
	
    delete [] mirror;
    return (0);
}

int main(int, char**)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mTEST WITH INT TYPE\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mInit Array\e[0m" << std::endl;
	
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	std::cout << numbers << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mFilling Array\e[0m" << std::endl;
	
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

	std::cout << numbers << std::endl;
    //SCOPE
    {
		std::cout << std::endl;
		std::cout << "\e[1;31mCopy Constructor Test\e[0m" << std::endl;
	
        Array<int> tmp = numbers;
        Array<int> test(tmp);

		std::cout << tmp << std::endl;
		std::cout << test << std::endl;
    }

	std::cout << std::endl;
	std::cout << "\e[1;31mComparison of Array and saved Mirror\e[0m" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			delete[] mirror; // not in their original code
            return (1);
        }
    }
	std::cout << "Numbers and Mirror match" << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mBad index testing\e[0m" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << std::endl;
	std::cout << "\e[1;31mOverwriting array with new random values\e[0m" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

	std::cout << numbers << std::endl;
	
    delete [] mirror;
    return (main2());
}