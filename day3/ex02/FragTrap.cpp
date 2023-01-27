/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:42:44 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 15:44:21 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "FragTrap";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "\e[32mDefault " << name << " is ready for epic high fives action. (this is a FragTrap constructor)\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string aName)
{
	name = aName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "\e[32mNotSoDefault " << name << " is ready for epic high fives action. (this is a FragTrap constructor)\e[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[33mNo one wants to high five with " << name << " anymore. (this is a FragTrap destructor)\e[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " wants to high five with the team";
	std::cout << std::endl;
	// No one said this required energy to do
}