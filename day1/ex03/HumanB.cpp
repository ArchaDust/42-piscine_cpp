/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:22:49 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:29:13 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string startName) : _name(startName)
{
	
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack(void) const
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon and cannot attack." << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}
