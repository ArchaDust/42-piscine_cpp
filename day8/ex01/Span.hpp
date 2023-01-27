/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:51:00 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/26 11:25:41 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>

class Span
{
		public:
	Span(unsigned int N);
	~Span();
	Span(Span const &from);
	Span	&operator=(Span const &from);

	void	addNumber(int nbr);
	
	template<class InputIter>
	void	addNumber(InputIter beg, InputIter end)
	{
		for (InputIter it = beg; it != end; ++it)
		{
			if (_used >= _cap)
				throw CapacityException();
			_data[_used] = *it;
			_used++;
		}
	}

	int		shortestSpan(void) const;
	int		longestSpan(void) const;

	unsigned int	size(void) const;

	int const &operator[](unsigned int index) const;

	class OutOfRangeException : public std::exception
	{
			public :
		virtual const char *what() const throw();
	};

	class CapacityException : public std::exception
	{
			public :
		virtual const char *what() const throw();
	};

	class NotEnoughtElementsException : public std::exception
	{
			public :
		virtual const char *what() const throw();
	};

		private:
	int					*_data;
	unsigned int		_cap;
	unsigned int		_used;

	Span();
};

std::ostream	&operator<<(std::ostream& os, const Span& from);

#endif