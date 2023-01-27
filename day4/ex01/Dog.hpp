/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:02:34 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:52:49 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
		public:
	Dog();
	Dog(const Dog&);
	virtual	~Dog();
	virtual Dog &operator=(const Dog&);

	virtual void	makeSound(void) const;
	virtual void	showThoughts(int thought) const;
	virtual void	shiftIdeas(int shift);

		private:
	Brain		*brain;
};

#endif