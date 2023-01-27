/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:07:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:43:15 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\e[32mWrongCat::WrongCat() Default\e[0m" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& from)
{
	std::cout << "WrongCat::WrongCat() Copy" << std::endl;
	type = from.type;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[33mWrongCat::~WrongCat()\e[0m" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& from)
{
	std::cout << "WrongCat::operator=()" << std::endl;
	type = from.type;
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Meoooow..." << std::endl;
}
