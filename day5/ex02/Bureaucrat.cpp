/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:42:50 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:52 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150), _name("Jerry")
{
    std::cout << "\e[32mBureaucrat::Bureaucrat() Default\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _grade(grade), _name(name)
{
    std::cout << "\e[32mBureaucrat::Bureaucrat(int grade, std::string name)\e[0m" << std::endl;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& from)
{
    std::cout << "Bureaucrat::Bureaucrat() Copy" << std::endl;
	_grade = from._grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\e[33mBureaucrat::~Bureaucrat()\e[0m" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& from)
{
    std::cout << "Bureaucrat::operator=()" << std::endl;
	_grade = from._grade;
    return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::promote(void)
{
	if (_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		std::cout << _name << " got promoted" << std::endl;
		_grade--;
	}
}

void	Bureaucrat::demote(void)
{
	if (_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		std::cout << _name << " got demoted" << std::endl;
		_grade++;
	}
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << _name << " couldn't SIGN " << f.getName() << " because their grade is too low" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &f)
{
	try
	{
		f.execute(*this);
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << _name << " couldn't EXECUTE " << f.getName() << " because their grade is too low" << std::endl;
		return ;
	}
	catch (const AForm::FormNotSignedException& e)
	{
		std::cerr << _name << " couldn't EXECUTE " << f.getName() << " because the form isn't signed yet" << std::endl;
		return ;
	}
	std::cout << _name << " executed Form " << f.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& from)
{
	os << from.getName() << ", bureaucrat grade " << from.getGrade();
	return (os);
}