/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:47:25 by aberneli          #+#    #+#             */
/*   Updated: 2022/03/31 01:01:25 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _total(0)
{

}

int		Phonebook::ToIndex(std::string s)
{
	if (s.size() != 1)
		return (-1);
	if (s[0] < '0' || s[1] > '9')
		return (-1);
	return (s[0] - '0');
}

void	Phonebook::Search(void)
{
	std::string	index;
	int			indexInt;
	bool		valid = false;

	if (_total == 0)
	{
		std::cout << "Contact list is empty." << std::endl << std::endl;
		return ;
	}
	std::cout
		<< std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < _total && i < 8; i++)
		_contacts[i].DisplayShort(i);
	while (!valid)
	{
		std::cout << std::endl;
		std::cout << "Pick an index: ";
		std::getline(std::cin, index);
		indexInt = ToIndex(index);
		if (indexInt >= 0 && (indexInt < 8 && indexInt < _total))
			valid = true;
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
		else
			std::cout << "Invalid index." << std::endl;
	}
	_contacts[indexInt].Display();
	std::cout << std::endl;
}

void	Phonebook::Add(void)
{
	std::string	fn;
	std::string	ln;
	std::string	nn;
	std::string	pn;
	std::string	ds;

	std::cout << "Please enter the following information about your new contact:" << std::endl;
	fn = Input("First Name: ");
	ln = Input("Last Name: ");
	nn = Input("Nickname: ");
	pn = Input("Phone Number: ");
	ds = Input("Darkest Secret: ");
	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
		return ;
	_contacts[_total % 8] = Contact(fn, ln, nn, pn, ds);
	_total++;
	std::cout << std::endl;
}

std::string	Phonebook::Input(std::string prompt)
{
	bool		valid;
	std::string	res;

	valid = false;
	while (!valid)
	{
		std::cout << prompt;
		std::getline(std::cin, res);
		if (res.size() > 0 && !res.empty())
			valid = true;
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			return ("");
		}
		else
			std::cout << "Field cannot be empty." << std::endl;
	}
	return (res);
}

void	Phonebook::Loop(void)
{
	std::string	inputStr;
	bool		flag;

	flag = true;
	while (flag)
	{
		std::cout << "Commands: ADD SEARCH EXIT: ";
		std::getline(std::cin, inputStr);
		if (inputStr == "ADD")
			Add();
		else if (inputStr == "SEARCH")
			Search();
		else if (inputStr == "EXIT")
			flag = false;
		if (std::cin.eof())
			break ;
	}
}
