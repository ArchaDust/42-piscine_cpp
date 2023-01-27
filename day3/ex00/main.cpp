/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:05:56 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 12:26:14 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	canonicalClap(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mCanonical Clap\e[0m" << std::endl;
	
	ClapTrap clappy;
	ClapTrap clapoutty;
	ClapTrap clapette = clappy;
	
	clapoutty = clapette;
}

void	chadClap(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mChadTrap\e[0m" << std::endl;
	ClapTrap chadTrap("ChadTrap");

	chadTrap.takeDamage(0);
	chadTrap.takeDamage(1);
	chadTrap.takeDamage(0);

	chadTrap.beRepaired(1);
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.takeDamage(2);
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.attack("VirginTrap");
	chadTrap.beRepaired(10);
	std::cout << "ChadTrap won against VirginTrap, even without energy !" << std::endl;
}

void	badClap(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mBad Clap\e[0m" << std::endl;
	
	ClapTrap eclatax("EclataxTrap");

	for (int i = 0; i < 14; i++)
	{
		eclatax.takeDamage(1);
	}
	eclatax.attack("ChadTrap");
	eclatax.beRepaired(1);
}

int	main(void)
{
	canonicalClap();
	chadClap();
	badClap();

	return (0);
}