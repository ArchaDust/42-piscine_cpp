/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:07:14 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:28:42 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
		public:
	Weapon();
	Weapon(std::string typeName);
	~Weapon();

	const std::string	&getType(void) const;
	void				setType(std::string newType);

		private:
	std::string	_type;
};

#endif