/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:57:06 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/04 11:57:07 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
	std::string	_name;

    public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif