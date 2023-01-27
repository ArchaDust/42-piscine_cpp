/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:27:47 by aberneli          #+#    #+#             */
/*   Updated: 2021/12/21 14:26:47 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(std::string firstName, std::string lastName,
		std::string nickName, std::string phoneNumber,
		std::string darkestSecret) :
	_firstName(firstName),
	_lastName(lastName),
	_nickName(nickName),
	_phoneNumber(phoneNumber),
	_darkestSecret(darkestSecret)
{

}

std::string Contact::Shorten(std::string str)
{
	if (str.size() <= 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

void Contact::DisplayShort(int index)
{
	std::cout
		<< std::setw(10) << index << "|"
		<< std::setw(10) << Shorten(_firstName) << "|"
		<< std::setw(10) << Shorten(_lastName) << "|"
		<< std::setw(10) << Shorten(_nickName) << std::endl;
}

void Contact::Display(void)
{
	std::cout << "First Name    : " << _firstName << std::endl;
	std::cout << "Last Name     : " << _lastName << std::endl;
	std::cout << "Nickname      : " << _nickName << std::endl;
	std::cout << "Phone Number  : " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
