/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:21:04 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 15:29:55 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _signed(false), _signGrade(150), _execGrade(1), _target("Default")
{
    std::cout << "\e[32mAForm::AForm() Default\e[0m" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
    std::cout << "\e[32mAForm::AForm()\e[0m" << std::endl;
	if (signGrade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (signGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
	if (execGrade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (execGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const AForm& from) : _name(from._name), _signed(from._signed), _signGrade(from._signGrade), _execGrade(from._execGrade)
{
    std::cout << "AForm::AForm() Copy" << std::endl;
}

AForm::~AForm()
{
    std::cout << "\e[33mAForm::~AForm()\e[0m" << std::endl;
}

AForm &AForm::operator=(const AForm& from)
{
    std::cout << "AForm::operator=()" << std::endl;
	_signed = from._signed;
    return (*this);
}

const std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int	AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (_execGrade);
}

const std::string	AForm::getTarget(void) const
{
	return (_target);
}

void	AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << b.getName() << " signed " << _name << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
	{
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw AForm::GradeTooLowException();
	}
	this->executeInternal();
}

void	AForm::executeInternal(void) const
{
	
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form isn't signed yet !");
}

std::ostream	&operator<<(std::ostream& os, const AForm& from)
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