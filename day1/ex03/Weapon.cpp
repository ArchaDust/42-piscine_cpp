/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:09:38 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:29:24 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string typeName) : _type(typeName)
{

}

Weapon::~Weapon()
{
	
}

const std::string	&Weapon::getType(void) const
{
	return (_type);
}
void	Weapon::setType(std::string newType)
{
	_type = newType;
}