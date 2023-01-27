/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:02:09 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/29 13:44:10 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template<typename T>
class Array
{
		public:
	Array()
	{
		_data = new T[0];
		_size = 0;
	}

	Array(unsigned int n)
	{
		_data = new T[n]();
		_size = n;
	}

	Array(Array const &from)
	{
		_size = from._size;
		_data = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
		{
			_data[i] = from._data[i];
		}
	}
	
	~Array()
	{
		delete[] _data;
	}
	
	Array	&operator=(Array const &from)
	{
		if (this == &from)
			return (*this);

		_size = from._size;
		delete[] _data;
		_data = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
		{
			_data[i] = from._data[i];
		}

		return (*this);
	}
	
	T	&operator[](unsigned int index)
	{
		if (index < 0 || index >= _size)
			throw std::out_of_range("Array: Out of range.");
		return _data[index];
	}

	// this one is used for operator<<
	T const operator[](unsigned int index) const
	{
		if (index < 0 || index >= _size)
			throw std::out_of_range("Array: Out of range.");
		return _data[index];
	}

	unsigned int	size(void) const
	{
		return (_size);
	}
	
		private:
	T				*_data;
	unsigned int	_size;
};

template <typename T>
std::ostream	&operator<<(std::ostream& os, const Array<T> &from)
{
	os << "Array: [";
	for (unsigned int i = 0; i < from.size() - 1; i++)
	{
		os << from[i] << ", ";
	}
	os << from[from.size() - 1] << "]";
	return (os);
}

#endif
