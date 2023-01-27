/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:34:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/27 15:55:37 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Data.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mWorking Thing\e[0m" << std::endl;

	// the crc32 is, of course, fake and incorrect
	
	//				 magic				 crc32		 width height
	Data		d = {0x000061736572794D, 0x00464953, 1280, 768};
	uintptr_t	inflightPtr;
	Data		*endPtr;

	std::cout << d << std::endl;

	inflightPtr = serialize(&d);

	std::cout << "0x" << std::hex << inflightPtr << std::dec << std::endl;

	endPtr = deserialize(inflightPtr);

	std::cout << endPtr << std::endl << std::endl;
	std::cout << *endPtr << std::endl;

	std::cout << std::endl;
	std::cout << "\e[1;31mNull ptr Test\e[0m" << std::endl;


	Data		*fakePtr;
	uintptr_t	fakeUintptr;

	fakePtr = deserialize(0);
	std::cout << fakePtr << std::endl;
	fakeUintptr = serialize(nullptr);
	std::cout << "0x" << std::hex << fakeUintptr << std::dec << std::endl;

	return (0);
}