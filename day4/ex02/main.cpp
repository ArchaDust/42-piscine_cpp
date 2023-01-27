/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/19 10:25:35 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define TEST_AMOUNT 2

void	BasicCase(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mBasicCase\e[0m" << std::endl;

	const AAnimal* i = new Cat();
	
	std::cout << i->getType() << " is me !" << std::endl;
	
	i->makeSound(); //will output the cat sound!
	i->showThoughts(27);
	i->showThoughts(69);

	delete i;
}

void	SubjectCase(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mSubjectCase\e[0m" << std::endl;

	AAnimal	*animals[TEST_AMOUNT];
	
	for (int i = 0; i < TEST_AMOUNT; i++)
	{
		if (i < TEST_AMOUNT / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < TEST_AMOUNT; i++)
	{
		delete animals[i];
	}
}

void	DeepCase(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mDeepCase\e[0m" << std::endl;

	Cat	c;
	Cat	d;

	c.showThoughts(0);
	c.shiftIdeas(25);
	c.showThoughts(0);
	d = c;
	c.showThoughts(0);
}

int main()
{
	BasicCase();
	SubjectCase();
	DeepCase();

	return (0);
}
