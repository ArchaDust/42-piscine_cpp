/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:06:15 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 12:08:14 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
		public:
	ClapTrap();
	ClapTrap(std::string aName);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap&);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

		protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
};

#endif
