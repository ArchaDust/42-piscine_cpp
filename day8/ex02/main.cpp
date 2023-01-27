/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:07:08 by aberneli          #+#    #+#             */
/*   Updated: 2022/05/03 09:46:09 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <stack>
#include <list>
#include <vector>
#include "MutantStack.hpp"

int main2()
{
	std::cout << std::endl;
	std::cout << "\e[1;31mList\e[0m" << std::endl;
	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl; // 17
	mstack.pop_back();
	std::cout << mstack.size() << std::endl; // 1

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(2);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	std::cout << *it << std::endl << std::endl;

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::list<int> s(mstack);
	return (0);
}

int main()
{
	std::cout << std::endl;
	std::cout << "\e[1;31mMutantStack\e[0m" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; // 17
	mstack.pop();
	std::cout << mstack.size() << std::endl; // 1

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(2);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << *it << std::endl << std::endl;

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	
	main2();

	return (0);
}