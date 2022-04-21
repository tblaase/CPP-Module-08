/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:08:37 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/21 11:43:13 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <class T>

class MutantStack : public std::stack<T>
{
public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	// Constructors
	MutantStack() : stack()
	{
		std::cout << "Default Constructor called" << std::endl;
	}

	MutantStack(const stack &src) : stack(src)
	{
		std::cout << "Copy Constructor called" << std::endl;
	}

	// Deconstuctor
	~MutantStack()
	{
		std::cout << "Deconstuctor called" << std::endl;
	}

	// Overloaded opperators
	stack &operator=(const stack &src)
	{
		if (*this != src)
			*this = src;
		return (*this);
	}

	// begin iterator
	iterator begin()
	{
		return (stack::c.begin());
	}

	// end iterator
	iterator end()
	{
		return (stack::c.end());
	}
};
