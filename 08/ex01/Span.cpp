/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:41:35 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/27 14:38:55 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include "climits"

Span::Span() : _N(0), _numbers(){}

Span::Span(unsigned int N) : _N(N) ,_numbers(){}

Span::Span(const Span &obj) : _N(obj._N), _numbers(obj._numbers){}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)	
	{
		this->_N = obj._N;
		this->_numbers = obj._numbers;
	}
	return *this;
}

Span::~Span()
{
	std::cout << "Destructor called for span" << std::endl;
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _N)
		throw std::runtime_error("Span is full");
	this->_numbers.push_back(number);
	return ;
}

unsigned int Span::shortestSpan() const
{
	// only one number 
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Only one number");

	unsigned int shortest = UINT_MAX;
	
	// Copy Vector to sort
	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	for(size_t i = 1; i < sortedNumbers.size(); i++)
	{
		// calulate span of neighbourd
		unsigned int span = sortedNumbers[i] - sortedNumbers[i-1];
		if(span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned int Span::longestSpan() const
{
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Only one number");

	// const_iterator reads and acts like a pointer, searches eith min/max__element
	// return a iterator pointing to the smallest or largerst number 
	std::vector<int>::const_iterator min_it = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::const_iterator max_it = std::max_element(_numbers.begin(), _numbers.end());
	return *max_it - *min_it;
}


