/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:15:36 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/19 18:51:54 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span()
{
	std::cout << "Span Default Constructor called" << std::endl;
	/*CODE*/
}

Span::Span(unsigned int N): _size(N)
{
	std::cout << "Span Constructor for size of " << N << " called" << std::endl;
	this->_storage = new int[this->_size];
	if (this->_storage == NULL)
		throw(AllocationFailedException())
}

Span::Span(const Span &src)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = src;
}

// Deconstructors
Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
	/*CODE*/
}

// Overloaded Operators
Span &Span::operator=(const Span &src)
{
	std::cout << "Span Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	/*CODE*/
	return *this;
}

// Exceptions
const char	*Span::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}

const char	*Span::AllocationFailedException::what() const throw()
{
	return ("Error: Allocation failed");
}

const char	*Span::ArrayFullException::what() const throw()
{
	return ("Error: Array full");
}

// Public Methods

// Getter

// Setter

