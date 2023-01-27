/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:59 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 15:35:34 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <stdexcept>
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
		public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm&);
	
		private:
	virtual void		executeInternal(void) const;
};

#endif