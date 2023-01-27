/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:34:05 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/22 11:38:10 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\e[32mIntern::Intern() Default\e[0m" << std::endl;
}

Intern::Intern(const Intern&)
{
	std::cout << "Intern::Intern() Copy" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\e[33mIntern::~Intern()\e[0m" << std::endl;
}

Intern &Intern::operator=(const Intern&)
{
	std::cout << "Intern::operator=()" << std::endl;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	const static std::string	indexArray[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};
	int		index;

	index = -1;
	for (int i = 0; i < 3; i++)
		if (formName == indexArray[i])
			index = i;
	
	switch (index)
	{
		case 0: return (new ShrubberyCreationForm(formTarget)); break;
		case 1: return (new RobotomyRequestForm(formTarget)); break;
		case 2: return (new PresidentialPardonForm(formTarget)); break;

		default: std::cerr << "Intern cannot create form '" << formName << "'"<< std::endl;
		return (nullptr); break;
	}
	return (nullptr);
}