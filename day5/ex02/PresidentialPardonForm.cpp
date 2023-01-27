/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:51 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 15:30:37 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidental Pardon Form", 25, 5, "Default")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidental Pardon Form", 25, 5, target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm&)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	return (*this);
}

void	PresidentialPardonForm::executeInternal(void) const
{
	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}