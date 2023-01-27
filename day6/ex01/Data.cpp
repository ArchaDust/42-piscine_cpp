/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:22:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/25 09:55:51 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	//if (!raw)
	//	return (nullptr);
	return (reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream& os, const Data& from)
{
	os << "Magic:    0x" << std::hex << from.magic << std::endl;
	os << "Checksum: 0x" << std::hex << from.crc32 << std::endl;
	os << "Width:    " << std::dec << from.width << std::endl;
	os << "Height:   " << std::dec << from.height << std::endl;
	return (os);
}