/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:59 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 15:30:34 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <stdexcept>

class PresidentialPardonForm : public AForm
{
		public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm&);
	
		private:
	virtual void		executeInternal(void) const;
};

#endif