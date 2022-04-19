/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:14:13 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/19 18:51:41 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <array>

// classes

class Span
{
	private:
		int *_storage;
		unsigned int _size;
		unsigned int _pos;

	public:
	// Constructors
		Span();
		Span(unsigned int N);

	// Deconstructors
		~Span();

	// Overloaded Operators
		Span &operator=(const Span &src);

	// Public Methods
		void addNumber(int number);
		unsigned int shortestSpan()const;
		unsigned int longestSpan()const;

	// Exceptions
	class	InvalidIndexException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	AllocationFailedException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ArrayFullException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	// Getter

	// Setter

};
