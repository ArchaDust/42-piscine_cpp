/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:40:47 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/29 13:37:39 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	printAsHex(T const &n)
{
	std::cout << std::hex << static_cast<unsigned int>(n) << std::dec << ' ';
}

template<typename T>
void	iter(T *arr, unsigned int const len, void (*f)(T &))
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		(*f)(arr[i]);
		i++;
	}
}

template<typename T>
void	iter(T *arr, unsigned int const len, void (*f)(T const &))
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		(*f)(arr[i]);
		i++;
	}
}

#endif