/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:07:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:53:44 by aberneli         ###   ########.fr       */
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
	std::cout << "\e[32mDog::Dog() Copy\e[0m" << std::endl;
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

void		Dog::showThoughts(int thought) const
{
	if (thought < 0 || thought >= 100)
		thought = 0;
	std::cout << "Dog thinks of idea " << thought << ": "<< brain->getIdea(thought) << std::endl;
}

void		Dog::shiftIdeas(int shift)
{
	brain->shiftIdeas(shift);
}
