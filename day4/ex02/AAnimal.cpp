/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:27 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/19 10:22:43 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "\e[32mAAnimal::AAnimal() Default\e[0m" << std::endl;
	type = "JustAnAAnimal";
}

AAnimal::AAnimal(const AAnimal& from)
{
	std::cout << "\e[32mAAnimal::AAnimal() Copy\e[0m" << std::endl;
	type = from.type;
}

AAnimal::~AAnimal()
{
	std::cout << "\e[33mAAnimal::~AAnimal()\e[0m" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal& from)
{
	std::cout << "AAnimal::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (type);
}

void		AAnimal::makeSound(void) const
{
	std::cout << "(no sound)" << std::endl;
}

void		AAnimal::showThoughts(int thought) const
{
	(void)thought;
	std::cout << "(no brain, no thoughts, no ideas...)" << std::endl;
}

void		AAnimal::shiftIdeas(int shift)
{
	(void)shift;
	// does nothing, AAnimal has no brain
}
