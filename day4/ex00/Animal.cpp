/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:27 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 13:48:11 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\e[32mAnimal::Animal() Default\e[0m" << std::endl;
	type = "JustAnAnimal";
}

Animal::Animal(const Animal& from)
{
	std::cout << "Animal::Animal() Copy" << std::endl;
	type = from.type;
}

Animal::~Animal()
{
	std::cout << "\e[33mAnimal::~Animal()\e[0m" << std::endl;
}

Animal &Animal::operator=(const Animal& from)
{
	std::cout << "Animal::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}

void		Animal::makeSound(void) const
{
	std::cout << "(no sound)" << std::endl;
}
