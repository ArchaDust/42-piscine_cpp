/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:05:56 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 15:48:15 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void	SameOldClap(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mSameOldClap\e[0m" << std::endl;
	
	ClapTrap clappy("Clappy");
	ScavTrap scavy("Scavy");
	FragTrap fraggy("Fraggy");

	clappy.beRepaired(1);
	scavy.beRepaired(1);
	fraggy.beRepaired(1);
}

void	LetsParty(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mLetsParty\e[0m" << std::endl;

	FragTrap party("PartyTrap");

	party.highFivesGuys();
	party.highFivesGuys();
	party.highFivesGuys();
	party.highFivesGuys();
	party.highFivesGuys();

	party.takeDamage(10);
}

int	main(void)
{
	SameOldClap();
	LetsParty();

	return (0);
}