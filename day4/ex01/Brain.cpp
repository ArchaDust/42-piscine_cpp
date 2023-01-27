/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:01:10 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:56:09 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const std::string	g_ideas[100] = 
{
	"Baguette", "Baguette", "Baguette", "Baguette","Baguette",
	"Baguette", "Baguette", "Baguette", "Baguette","Baguette",
	"Baguette", "Baguette", "Baguette", "Baguette","Baguette",
	"Baguette", "Baguette", "Baguette", "Baguette","Baguette",
	"Baguette", "Baguette", "Baguette", "Baguette","Baguette",
	"Fromage", "Fromage", "Fromage", "Fromage","Fromage",
	"Fromage", "Fromage", "Fromage", "Fromage","Fromage",
	"Fromage", "Fromage", "Fromage", "Fromage","Fromage",
	"Fromage", "Fromage", "Fromage", "Fromage","Fromage",
	"Fromage", "Fromage", "Fromage", "Fromage","Fromage",
	"Omelette", "Omelette", "Omelette", "Omelette","Omelette",
	"Omelette", "Omelette", "Omelette", "Omelette","Omelette",
	"Omelette", "Omelette", "Omelette", "Omelette","Omelette",
	"Omelette", "Omelette", "Omelette", "Omelette","Omelette",
	"Omelette", "Omelette", "Omelette", "Omelette","Omelette",
	"Croissant", "Croissant", "Croissant", "Croissant","Croissant",
	"Croissant", "Croissant", "Croissant", "Croissant","Croissant",
	"Croissant", "Croissant", "Croissant", "Croissant","Croissant",
	"Croissant", "Croissant", "Croissant", "Croissant","Croissant",
	"Croissant", "Croissant", "Croissant", "Croissant","Croissant"
};

Brain::Brain()
{
	std::cout << "\e[32mBrain::Brain() Default\e[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = g_ideas[i];
}

Brain::Brain(const Brain& from)
{
	std::cout << "\e[32mBrain::Brain() Copy\e[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = from.ideas[i];
}

Brain::~Brain()
{
	std::cout << "\e[33mBrain::~Brain()\e[0m" << std::endl;
}

Brain &Brain::operator=(const Brain& from)
{
	std::cout << "Brain::operator=()" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = from.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		index = 0;
	return (ideas[index]);
}

void	Brain::shiftIdeas(int shift)
{
	if (shift < 0)
		shift = 0;
	for (int i = 0; i < 100; i++)
		ideas[i] = g_ideas[(i + shift) % 100];
}