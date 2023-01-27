/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:07:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 13:48:04 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\e[32mDog::Dog() Default\e[0m" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& from)
{
	std::cout << "Dog::Dog() Copy" << std::endl;
	type = from.type;
}

Dog::~Dog()
{
	std::cout << "\e[33mDog::~Dog()\e[0m" << std::endl;
}

Dog &Dog::operator=(const Dog& from)
{
	std::cout << "Dog::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "Waf Waf !" << std::endl;
}
