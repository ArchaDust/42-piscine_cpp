/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:08:35 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/08 15:46:20 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
		public:
	FragTrap();
	FragTrap(std::string name);
	//ScavTrap(const ScavTrap&);
	~FragTrap();
	//ScavTrap &operator=(const ScavTrap&);

	void	highFivesGuys(void);
};

#endif