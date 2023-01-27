/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:05:56 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 14:50:09 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	SameOldClap(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mSameOldClap\e[0m" << std::endl;
	
	ClapTrap clappy("Clappy");

	clappy.beRepaired(1);
}

void	SerenaMyLove(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mSerenaMyLove\e[0m" << std::endl;
	
	ScavTrap scav1("ScavTrap1.0");

	scav1.guardGate();
	for (int i = 0; i < 4; i++)
	{
		scav1.attack("Vault Hunter");
		scav1.takeDamage(1);
	}
	scav1.beRepaired(10);
}

void	ValentineStandoff(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mValentineStandoff\e[0m" << std::endl;
	
	ClapTrap clap("Valentine ClapTrap");
	ScavTrap scav("Valentine ScavTrap");

	scav.guardGate();
	scav.guardGate();
	scav.guardGate();
	clap.attack("Valentine ScavTrap");
	scav.takeDamage(0);
	clap.attack("Valentine ScavTrap");
	scav.takeDamage(0);
	clap.attack("Valentine ScavTrap");
	scav.takeDamage(0);
	clap.attack("Valentine ScavTrap");
	scav.takeDamage(0);
	clap.attack("Valentine ScavTrap");
	scav.takeDamage(0);
	scav.beRepaired(10);
	scav.attack("Valentine ClapTrap");
	clap.takeDamage(20);
	clap.attack("Valentine ScavTrap");
}

int	main(void)
{
	SameOldClap();
	SerenaMyLove();
	ValentineStandoff();

	return (0);
}