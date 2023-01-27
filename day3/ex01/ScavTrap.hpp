/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:43:37 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 15:11:01 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
		public:
	ScavTrap();
	ScavTrap(std::string name);
	//ScavTrap(const ScavTrap&);
	~ScavTrap();
	//ScavTrap &operator=(const ScavTrap&);

	void	guardGate(void);
	void	attack(const std::string& target);
};

#endif