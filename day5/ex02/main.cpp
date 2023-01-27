/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 17:11:56 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

void	PardonMe(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mPardonMe\e[0m" << std::endl;

	Bureaucrat				jerry(40, "Jerry");
	Bureaucrat				jonny(23, "Jonny");
	Bureaucrat				jimmy(1, "Jimmy");
	PresidentialPardonForm	f("William");

	std::cout << jerry << std::endl;
	std::cout << f << std::endl;

	jerry.executeForm(f);
	jerry.signForm(f);
	jonny.signForm(f);
	jerry.executeForm(f);
	jonny.executeForm(f);
	jimmy.executeForm(f);
}

void	RobotomyCorp(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mLobotomyCorp\e[0m" << std::endl;

	Bureaucrat				jerry(1, "Jerry");
	RobotomyRequestForm		f("Judith");

	std::cout << jerry << std::endl;
	std::cout << f << std::endl;

	jerry.executeForm(f);
	jerry.signForm(f);
	jerry.executeForm(f);
	jerry.executeForm(f);
	jerry.executeForm(f);
	jerry.executeForm(f);
}

void	TreeFormality(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mTreeFormality\e[0m" << std::endl;

	Bureaucrat				jerry(1, "Jerry");
	ShrubberyCreationForm	f("ifelselseelse");

	std::cout << jerry << std::endl;
	jerry.executeForm(f);
	std::cout << f << std::endl;
	jerry.signForm(f);
	std::cout << f << std::endl;
	jerry.executeForm(f);
	std::cout << f << std::endl;
}

int main()
{
	std::srand(std::time(0));
	
	PardonMe();
	RobotomyCorp();
	TreeFormality();

	return (0);
}
