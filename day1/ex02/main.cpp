/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:14:24 by aberneli          #+#    #+#             */
/*   Updated: 2022/03/31 14:23:44 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*ptrBrain = &brain;
	std::string &refBrain = brain;

	std::cout << "Addresses of brain, ptrBrain and refBrain:" << std::endl;
	std::cout << &brain << std::endl << ptrBrain << std::endl << &refBrain << std::endl;


	std::cout << std::endl;

	std::cout << "Content of brain, ptrBrain and refBrain:" << std::endl;
	std::cout << brain << std::endl << *ptrBrain << std::endl << refBrain << std::endl;
	
	return (0);
}