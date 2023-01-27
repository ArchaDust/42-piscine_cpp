/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/27 15:58:27 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int		rand;

	rand = std::rand() % 3;
	if (rand == 0)
		return (new A());
	else if (rand == 1)
		return (new B());
	return (new C());
}

void identify(Base* p)
{
	if (p == nullptr)
	{
		std::cout << "p is NULL, cannot identify" << std::endl;
		return ;
	}
	if (dynamic_cast<A *>(p) != nullptr)
	{
		std::cout << "p is of type A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p) != nullptr)
	{
		std::cout << "p is of type B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p) != nullptr)
	{
		std::cout << "p is of type C" << std::endl;
		return ;
	}
	std::cout << "p is of type Base" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base	&tmp = dynamic_cast<A &>(p);
		(void)tmp;
		std::cout << "p is of type A" << std::endl;
		return ;
	}
	catch (std::bad_cast &ba)
	{
		
	}
	try
	{
		Base	&tmp = dynamic_cast<B &>(p);
		(void)tmp;
		std::cout << "p is of type B" << std::endl;
		return ;
	}
	catch (std::bad_cast &ba)
	{
		
	}
	try
	{
		Base	&tmp = dynamic_cast<C &>(p);
		(void)tmp;
		std::cout << "p is of type C" << std::endl;
		return ;
	}
	catch (std::bad_cast &ba)
	{
		
	}
	std::cout << "p is of type Base" << std::endl;
}

int	main(void)
{
	std::srand(std::time(0));

	Base	*p;

	std::cout << std::endl;
	std::cout << "\e[1;31mGenerate\e[0m" << std::endl << std::endl;

	p = generate();
	
	std::cout << "\e[1;31mPointer Test\e[0m" << std::endl;
	identify(p);
	std::cout << "\e[1;31mReference Test\e[0m" << std::endl;
	identify(*p);

	std::cout << "\e[1;31mDelete\e[0m" << std::endl;
	delete (p);

	std::cout << std::endl;
	std::cout << "\e[1;31mNull ptr Test\e[0m" << std::endl;

	A	*tmp = nullptr;
	identify(tmp); // if the pointer is null, dynamic_cast cannot identify the type

	return (0);
}