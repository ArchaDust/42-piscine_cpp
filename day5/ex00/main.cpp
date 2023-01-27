/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/22 11:24:15 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	CantMakeIt(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mCantMakeIt\e[0m" << std::endl;

	Bureaucrat	jerry;

	std::cout << jerry << std::endl;
	try
	{
		jerry = Bureaucrat(200, "Jerry");
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << jerry << std::endl;
}

void	ThrowMeOut(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mThrowMeOut\e[0m" << std::endl;

	Bureaucrat	jerry(150, "Jerry");

	std::cout << jerry << std::endl;
	try
	{
		jerry.demote();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	CannotPromote(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mCannotPromote\e[0m" << std::endl;

	Bureaucrat	jerry(2, "Jerry");

	std::cout << jerry << std::endl;
	try
	{
		jerry.promote();
		std::cout << jerry << std::endl;
		jerry.promote();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	CantMakeIt();
	ThrowMeOut();
	CannotPromote();

	return (0);
}
