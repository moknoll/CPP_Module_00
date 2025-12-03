/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:41:35 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/12/02 10:26:00 by mknoll           ###   ########.fr       */
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

Span::~Span(){}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _N)
		throw std::runtime_error("Span is full");
	this->_numbers.push_back(number);
	return ;
}

// Template method to add multiple numbers using iterator range
template <typename Iterator>
void Span::addMultipleNumbers(Iterator begin, Iterator end)
{
	// Check if we have enough space for all new numbers
	unsigned int distance = std::distance(begin, end);
	if (_numbers.size() + distance > _N)
		throw std::runtime_error("Not enough space in Span for all numbers");
	
	// Add all numbers from the iterator range
	for (Iterator it = begin; it != end; ++it)
	{
		_numbers.push_back(*it);
	}
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
	return (*max_it - *min_it);
}

void Span::printNumbers() const
{	
	// Iterator to print the span 
	for(std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); it++)
		std::cout << *it << std::endl;
}

