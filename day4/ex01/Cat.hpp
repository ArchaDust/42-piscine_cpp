/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:02:34 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/12 13:52:23 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
		public:
	Cat();
	Cat(const Cat&);
	virtual	~Cat();
	virtual Cat &operator=(const Cat&);

	virtual void	makeSound(void) const;
	virtual void	showThoughts(int thought) const;
	virtual void	shiftIdeas(int shift);

		private:
	Brain		*brain;
};

#endif