/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:07:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:30:16 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[32mCat::Cat() Default\e[0m" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& from)
{
	std::cout << "Cat::Cat() Copy" << std::endl;
	type = from.type;
}

Cat::~Cat()
{
	std::cout << "\e[33mCat::~Cat()\e[0m" << std::endl;
}

Cat &Cat::operator=(const Cat& from)
{
	std::cout << "Cat::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Meoooow..." << std::endl;
}
