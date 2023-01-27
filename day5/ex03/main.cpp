/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/22 11:37:57 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

void	NoCoffeeDay(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mNoCoffeeDay\e[0m" << std::endl;

	Intern	john;
	AForm	*pform = john.makeForm("PresidentialPardonForm", "Jolly");
	AForm	*sform = john.makeForm("ShrubberyCreationForm", "Birch");
	AForm	*rform = john.makeForm("RobotomyRequestForm", "Alicia");

	AForm	*iform = john.makeForm("NotAForm", "git gud"); // won't work, returns nullptr

	std::cout << *pform << std::endl << *sform << std::endl << *rform << std::endl;

	delete pform;
	delete sform;
	delete rform;
	delete iform; // will do nothing since iform is invalid and returns nullptr
}

void	GiveMeTheGoddamnForm(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mGiveMeTheGoddamnForm\e[0m" << std::endl;

	Intern		blake;
	Bureaucrat	jack(1, "jack");

	AForm	*sform = blake.makeForm("ShrubberyCreationForm", "Wildlife");

	jack.signForm(*sform);
	jack.executeForm(*sform);

	delete sform;
}

int main()
{
	std::srand(std::time(0));
	
	NoCoffeeDay();
	GiveMeTheGoddamnForm();

	return (0);
}
