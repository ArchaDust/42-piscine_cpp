/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:01:08 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:52:13 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
		public:
	Brain();
	Brain(const Brain&);
	~Brain();
	Brain &operator=(const Brain&);

	std::string	getIdea(int index) const;
	void		shiftIdeas(int shift);
	
		private:
	std::string	ideas[100];
};

#endif