/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:57:03 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/04 11:58:12 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << ": *crawls out of the unholy dirt*" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": *sounds of a lifeless body falling to the ground*" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::name(std::string name)
{
	_name = name;
}