/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:57:57 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/26 11:30:35 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// private
Span::Span() : _data(nullptr), _cap(0), _used(0)
{
	
}

Span::Span(unsigned int N) : _data(0), _cap(N), _used(0)
{
	if (!N)
		throw std::exception(); // wanted to use std::bad_alloc() but can't
	_data = new int[_cap];
}

Span::~Span()
{
	delete[] _data;
}

Span::Span(Span const &from) : _cap(from._cap), _used(from._used)
{
	_data = new int[_cap];

	for (unsigned int i = 0; i < from._used; i++)
	{
		_data[i] = from._data[i];
	}
}

Span	&Span::operator=(Span const &from)
{
	if (this == &from)
		return (*this);

	_cap = from._cap;
	_used = from._used;
	_data = new int[_cap];

	for (unsigned int i = 0; i < from._used; i++)
	{
		_data[i] = from._data[i];
	}

	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (_used >= _cap)
		throw CapacityException();
	_data[_used] = nbr;
	_used++;
}

int		Span::shortestSpan(void) const
{
	unsigned int	shortest;
	unsigned int	tmp;

	if (_used < 2)
		throw NotEnoughtElementsException();

	shortest = 0xFFFFFFFF;

	for (unsigned int i = 0; i < _used - 1; i++)
	{
		tmp = std::abs(_data[i] - _data[i + 1]);
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest);
}

int		Span::longestSpan(void) const
{
	int	lowest;
	int	highest;

	if (_used < 2)
		throw NotEnoughtElementsException();

	lowest = *std::min_element(_data, _data + _used);
	highest = *std::max_element(_data, _data + _used);
	return (highest - lowest);
}

unsigned int	Span::size(void) const
{
	return (_used);
}

int const	&Span::operator[](unsigned int index) const
{
		if (index < 0 || index >= _used)
				throw OutOfRangeException();
		return _data[index];
}

const char *Span::OutOfRangeException::what() const throw()
{
	return ("Index is out of range");
}


const char *Span::CapacityException::what() const throw()
{
	return ("Span capacity is full");
}

const char *Span::NotEnoughtElementsException::what() const throw()
{
	return ("Span has not enough elements to search a meaningful span");
}

std::ostream	&operator<<(std::ostream& os, const Span& from)
{
	os << "[";
	for (unsigned int i = 0; i < from.size() - 1; i++)
	{
		os << from[i] << ", ";
	}
	os << from[from.size() - 1] << "]";
	return (os);
}
