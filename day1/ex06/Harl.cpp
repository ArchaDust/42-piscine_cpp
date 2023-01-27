/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:44:35 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 13:19:10 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::complain(std::string level)
{
	std::string	indexArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl_mptr			methodPtr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int		index;

	index = -1;
	for (int i = 0; i < 4; i++)
		if (level == indexArray[i])
			index = i;
	
	switch (index)
	{
		case 0:
			(this->*methodPtr[0])();

		case 1:
			(this->*methodPtr[1])();

		case 2:
			(this->*methodPtr[2])();

		case 3:
			(this->*methodPtr[3])();
			break;
			
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG: ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]: ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]: ";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]: ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
