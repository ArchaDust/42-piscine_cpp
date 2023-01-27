/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:56:57 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/04 11:56:58 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde1;
	Zombie	*horde2;

	horde1 = zombieHorde(7, "Daniel");
	horde2 = zombieHorde(12, "Mitchel");

	for (int i = 0; i < 7; i++)
	{
		horde1[i].announce();
	}
	for (int i = 0; i < 12; i++)
	{
		horde2[i].announce();
	}

	delete[] horde2;
	delete[] horde1;

	return (0);
}