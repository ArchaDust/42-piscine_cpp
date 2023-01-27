/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:51 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 16:15:40 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45, "Default")
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45, target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	return (*this);
}

void	RobotomyRequestForm::executeInternal(void) const
{
	std::cout << "**LOUD DRILL NOISES**" << std::endl;
	if (std::rand() % 100 < 50)
		std::cout << getTarget() << " has been successfully robotomised." << std::endl;
	else
		std::cout << getTarget() << " has not been robotomised properly ." << std::endl;
}