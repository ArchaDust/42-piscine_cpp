/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:41:02 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:56 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
		public:
	Bureaucrat();
	Bureaucrat(int grade, std::string name);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat&);

	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				promote(void);
	void				demote(void);

	void				signForm(AForm &f);
	void				executeForm(AForm const &f);

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

		private:
	int					_grade;
	const std::string	_name;
};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& from);

#endif