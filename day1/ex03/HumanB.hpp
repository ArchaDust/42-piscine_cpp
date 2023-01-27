/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:11:21 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:28:25 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
		public:
	HumanB(std::string startName);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(Weapon &newWeapon);

		private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif