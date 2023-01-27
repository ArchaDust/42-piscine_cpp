/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:02:34 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:28:55 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{
		public:
	Dog();
	Dog(const Dog&);
	virtual	~Dog();
	Dog &operator=(const Dog&);

	virtual void	makeSound(void) const;
};

#endif