/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:35:54 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 17:09:53 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	CantMakeIt(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mCantMakeIt\e[0m" << std::endl;

	Bureaucrat	jerry;
	Form		f;
	
	std::cout << f << std::endl;
	try
	{
		f = Form("Bad Form", 150, 200);
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f << std::endl;

	std::cout << jerry << std::endl;
	try
	{
		jerry = Bureaucrat(200, "Jerry");
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << jerry << std::endl;
}

void	SignMeUp(void)
{
	std::cout << std::endl;
	std::cout << "\e[1;31mSignMeUp\e[0m" << std::endl;

	Bureaucrat	jerry(76, "Jerry");
	Form		f("Very important Form", 75, 1);

	jerry.signForm(f);
	jerry.promote();
	jerry.signForm(f);
}

int main()
{
	CantMakeIt();
	SignMeUp();

	return (0);
}
