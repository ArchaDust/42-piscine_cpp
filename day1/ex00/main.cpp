/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:56:51 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/04 11:56:54 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*pZ1;
	Zombie	*pZ2;
	Zombie	*pZ3;
	Zombie	vZ4("Maddie");
	Zombie	vZ5("Jean");

	pZ1 = newZombie("Arlan");
	pZ2 = newZombie("Lucy");
	pZ3 = new Zombie("Richard");

	pZ3->announce(); // Richard announce
	delete pZ3; // Richard destroy

	delete pZ1; // Arlan destroy

	vZ4.announce(); // Maddie announce
	vZ4.announce(); // Maddie announce
	vZ5.announce(); // Jean announce

	pZ2->announce(); // Lucy announce

	randomChump("Lautrec"); // Lautrec announce + destroy

	delete pZ2; // Lucy destroy

	randomChump("Lautrec"); // Lautrec announce + destroy

	return (0); // Maddie and Jean destroy
}