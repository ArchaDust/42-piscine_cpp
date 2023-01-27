/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:11:21 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:28:18 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
		public:
	HumanA(std::string startName, Weapon &startWeapon);
	~HumanA();

	void	attack(void) const;
	void	setWeapon(Weapon &newWeapon);

		private:
	std::string		_name;
	Weapon 			&_weapon;
};

#endif