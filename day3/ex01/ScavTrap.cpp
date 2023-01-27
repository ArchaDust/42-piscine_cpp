/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:42:44 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 15:11:05 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "ScavTrap";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "\e[32mDefault " << name << " is ready to protect Serena. (this is a ScavTrap constructor)\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string aName)
{
	name = aName;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "\e[32mNotSoDefault " << name << " is ready to protect Serena. (this is a ScavTrap constructor)\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[33m" << name << " is no longer in a relationship with Serena. (this is a ScavTrap destructor)\e[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " died already and cannot attack." << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << name << " tries to attack but is out of sweet robot energy juice !" << std::endl;
		return ;
	}
	std::cout << name << " attacks " << target;
	std::cout << " with the power of love and gatekeeping, dealing " << attackDamage << " damage.";
	std::cout << std::endl;
	energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << name << " enters GATE KEEPER mode";
	std::cout << std::endl;
	// No one said this required energy to do
}