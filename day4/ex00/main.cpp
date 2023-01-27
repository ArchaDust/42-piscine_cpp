/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:43:37 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	BasicCase(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mBasicCase\e[0m" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

void	WrongCase(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mWrongCase\e[0m" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //won't output the cat sound
	meta->makeSound();

	delete i;
	delete meta;
}

int main()
{
	BasicCase();
	WrongCase();

	return (0);
}
