/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:32:44 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:44:01 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\e[32mWrongAnimal::WrongAnimal() Default\e[0m" << std::endl;
	type = "JustAWeirdAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& from)
{
	std::cout << "WrongAnimal::WrongAnimal() Copy" << std::endl;
	type = from.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[33mWrongAnimal::~WrongAnimal()\e[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& from)
{
	std::cout << "WrongAnimal::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "(no sound)" << std::endl;
}
