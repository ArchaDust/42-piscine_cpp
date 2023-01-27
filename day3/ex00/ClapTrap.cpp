/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:10:15 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 14:45:09 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "\e[32mDefault " << name << " is ready to mate with a power strip. (this is a ClapTrap constructor)\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string aName) : name(aName), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "\e[32mNotSoDefault " << name << " is ready to mate with a power strip. (this is a ClapTrap constructor)\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& from)
{
	std::cout << "CTRL+C CTRL+V " << from.name << std::endl;
	name = from.name;
	hitPoints = from.hitPoints;
	energyPoints = from.energyPoints;
	attackDamage = from.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[33m" << name << " has been disposed of. (this is a ClapTrap destructor)\e[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& from)
{
	std::cout << from.name << " = " << from.name << std::endl;
	name = from.name;
	hitPoints = from.hitPoints;
	energyPoints = from.energyPoints;
	attackDamage = from.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
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
	if (name[0] - 'A' < 13)
	{
		std::cout << name << " throws out profanities at " << target;
		std::cout << ", dealing " << attackDamage << " mental damage !";
		std::cout << std::endl;
	}
	else
	{
		std::cout << name << " attacks " << target;
		std::cout << " with his bare robot hands, dealing " << attackDamage << " damage.";
		std::cout << std::endl;
	}
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " died already and can't take even more damage." << std::endl;
		return ;
	}
	std::cout << name << " is being attacked. " << name << " lost " << amount << " hitpoints." << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
	{
		std::cout << name << " died like an idiot !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " died already and cannot be repaired." << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << name << " tries to repair but is out of sweet robot energy juice !" << std::endl;
		return ;
	}
	std::cout << name << " is repairing..." << std::endl;
	hitPoints += amount;
	energyPoints--;
}
