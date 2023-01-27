/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:48:45 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:52:07 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# include "Brain.hpp"

class Animal
{
		public:
	Animal();
	Animal(const Animal&);
	virtual	~Animal();
	virtual Animal &operator=(const Animal&);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	virtual void	showThoughts(int index) const;
	virtual void	shiftIdeas(int shift);

		protected:
	std::string type;
};

#endif