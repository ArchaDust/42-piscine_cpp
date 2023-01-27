/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:18:52 by aberneli          #+#    #+#             */
/*   Updated: 2022/03/30 23:20:07 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	Phonebook
{
		private:
	Contact	_contacts[8];
	int		_total;

	int		ToIndex(std::string s);
	void	Search(void);
	void	Add(void);

	std::string	Input(std::string prompt);

		public:
	Phonebook(void);

	void	Loop(void);
};

#endif
