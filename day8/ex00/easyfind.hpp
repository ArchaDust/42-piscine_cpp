/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:40:47 by aberneli          #+#    #+#             */
/*   Updated: 2022/05/02 11:41:30 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template<typename T>
int	easyfind(T a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	
	if (it == a.end())
		throw std::exception();

	return (std::distance(a.begin(), it));
}

#endif