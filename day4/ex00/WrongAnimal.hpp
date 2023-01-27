/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:32:00 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/11 14:32:24 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
		public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal&);

	std::string		getType(void) const;
	void			makeSound(void) const;

		protected:
	std::string type;
};

#endif