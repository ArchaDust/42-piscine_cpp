/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:35:45 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/26 17:15:19 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <cstddef>

template<class T>
class MutantStack : public std::stack<T>
{
		public:
		
	MutantStack() {}
	MutantStack(MutantStack const &from) {this->c = from.c;}
	~MutantStack() {}
	
	MutantStack	&operator=(MutantStack const &from)
	{
		if (this == &from)
			return (*this);

		this->c = from.c;

		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin(void){ return (this->c.begin()); }
	iterator	end(void) { return (this->c.end()); }

	/*class iterator
	{
			public:
		
		iterator(typename std::deque<T>::iterator &it) : _val(it)
		{
			
		}

		iterator(iterator const &from) : _val(from._val)
		{
			
		}
		
		~iterator()
		{

		}
		
		iterator	&operator=(iterator const &from)
		{
			if (this == &from)
				return (*this);

			this->_val = from._val;

			return (*this);
		}

		T			&operator*(void)
		{
			return (*_val);
		}
		
		iterator	&operator++(void)
		{
			++_val;
			return (*this);
		}
		
		iterator	&operator--(void)
		{
			--_val;
			return (*this);
		}
		
		iterator	operator++(int)
		{
			iterator	tmp = *this;

			++_val;
			return (tmp);
		}
		
		iterator	operator--(int)
		{
			iterator	tmp = *this;

			--_val;
			return (tmp);
		}
		
		bool		operator!=(iterator const &other)
		{
			return (this->_val != other._val);
		}
		
		bool		operator==(iterator const &other)
		{
			return (this->_val == other._val);
		}

			private:
		typename std::deque<T>::iterator _val;

		iterator()
		{
			
		}
	};

	iterator	begin(void)
	{
		typename std::deque<T>::iterator	it = this->c.begin();
		
		iterator	res(it);
		return (res);
	}
	
	iterator	end(void)
	{
		typename std::deque<T>::iterator	it = this->c.end();
		
		iterator	res(it);
		return (res);
	}*/
};

#endif