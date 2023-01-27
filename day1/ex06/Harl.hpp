/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:44:52 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/04 17:58:42 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
		public:
	
	Harl();
	~Harl();

	void	complain(std::string level);

		private:
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
};

typedef void (Harl::*Harl_mptr)(void);

#endif