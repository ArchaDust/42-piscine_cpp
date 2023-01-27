/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:48:45 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:28:46 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
		public:
	Animal();
	Animal(const Animal&);
	virtual	~Animal();
	Animal &operator=(const Animal&);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;

		protected:
	std::string type;
};

#endif