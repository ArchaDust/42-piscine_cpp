/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:21:13 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 15:29:56 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
		public:
	AForm();
	AForm(std::string name, int signGrade, int execGrade, std::string target);
    AForm(const AForm&);
    virtual ~AForm() = 0;
    AForm &operator=(const AForm&);

	const std::string	getName(void) const;
	bool				getSigned(void) const;
	int					getSignGrade(void) const;
	int					getExecGrade(void) const;
	const std::string	getTarget(void) const;

	void				beSigned(Bureaucrat const &b);
	void				execute(Bureaucrat const &executor) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

		private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;
	const std::string	_target;

	virtual void		executeInternal(void) const;
};

std::ostream	&operator<<(std::ostream& os, const AForm& from);

#endif