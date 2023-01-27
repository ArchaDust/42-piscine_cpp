/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:21:04 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/19 13:29:51 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _signed(false), _signGrade(150), _execGrade(1)
{
    std::cout << "\e[32mForm::Form() Default\e[0m" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
    std::cout << "\e[32mForm::Form()\e[0m" << std::endl;
	if (signGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (signGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (execGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (execGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& from) : _name(from._name), _signed(from._signed), _signGrade(from._signGrade), _execGrade(from._execGrade)
{
    std::cout << "Form::Form() Copy" << std::endl;
}

Form::~Form()
{
    std::cout << "\e[33mForm::~Form()\e[0m" << std::endl;
}

Form &Form::operator=(const Form& from)
{
    std::cout << "Form::operator=()" << std::endl;
	_signed = from._signed;
    return (*this);
}

const std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << b.getName() << " signed " << _name << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

std::ostream	&operator<<(std::ostream& os, const Form& from)
{
	os << from.getName() << ", ";
	if (from.getSigned())
		os << "Signed Form, ";
	else
		os << "Unsigned Form, ";
	os << "requires grade " << from.getSignGrade() << " to sign and ";
	os << from.getExecGrade() << " to execute";
	return (os);
}