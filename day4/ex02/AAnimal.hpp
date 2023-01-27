/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:48:45 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/19 10:21:08 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

# include "Brain.hpp"

class AAnimal
{
		public:
	AAnimal();
	AAnimal(const AAnimal&);
	virtual	~AAnimal() = 0;
	virtual AAnimal &operator=(const AAnimal&);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	virtual void	showThoughts(int index) const;
	virtual void	shiftIdeas(int shift);

		protected:
	std::string type;
};

#endif