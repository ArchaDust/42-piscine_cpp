/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:59 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 16:20:58 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <stdexcept>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm
{
		public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
	
		private:
	virtual void		executeInternal(void) const;
};

#endif