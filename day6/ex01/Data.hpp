/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:20:22 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/25 09:44:35 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

typedef struct Data
{
	uint64_t	magic;
	uint32_t	crc32;
	uint16_t	width;
	uint16_t	height;
}				Data;

uintptr_t		serialize(Data *ptr);
Data			*deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream& os, const Data& from);

#endif