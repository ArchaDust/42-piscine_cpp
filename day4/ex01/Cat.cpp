/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:07:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:53:35 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[32mCat::Cat() Default\e[0m" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& from)
{
	std::cout << "\e[32mCat::Cat() Copy\e[0m" << std::endl;
	type = from.type;
	brain = new Brain(*from.brain);
}

Cat::~Cat()
{
	std::cout << "\e[33mCat::~Cat()\e[0m" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat& from)
{
	std::cout << "Cat::operator=()" << std::endl;
	delete brain;
	brain = new Brain(*from.brain);
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Meoooow..." << std::endl;
}

void		Cat::showThoughts(int thought) const
{
	if (thought < 0 || thought >= 100)
		thought = 0;
	std::cout << "Cat thinks of idea " << thought << ": "<< brain->getIdea(thought) << std::endl;
}

void		Cat::shiftIdeas(int shift)
{
	brain->shiftIdeas(shift);
}
