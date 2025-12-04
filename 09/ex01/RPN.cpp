/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:26:27 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/04 10:43:02 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <exception>
#include <stack>

RPN::RPN() {} 

RPN::RPN(char *string) 
{
	parseOperations(string);
}

RPN::~RPN() {}

int RPN::isOperator(char c)
{
	if(c == '+' || c == '-' || c == '*' || c == '/')
		return 1; 
	return 0;
}

int RPN::isValid(char c)
{
	if(isdigit(c) || isOperator(c))
		return 1; 
	return 0;
}

void RPN::parseOperations(char *str)
{
	size_t i = 0;

	// fill the vector with characters 
	while(str[i])
	{
		if (str[i] == ' ')
    	{
      		i++;
        	continue;
   	 	}
		// skip whitespaces
		if (str[i] == ' ')
			i++;
		if (!isValid(str[i]))
			throw std::runtime_error("Invalid character in string!");
		_numbers.push_back(str[i]);
		i++;
	}
}

int RPN::ADD(int a, int b) const 
{
	return a + b;
}

int RPN::SUBTRACT(int a, int b)const 
{
	return a - b; 
}

int RPN::MULT(int a, int b) const 
{
	return a * b;
}

int RPN::DIVIDE(int a, int b) const 
{
	if (b == 0)
		throw std::runtime_error("Division by zero!");
	return a / b; 
}

void RPN::calculation()
{
	
	std::stack<int>st;
	
	for (size_t i = 0; i < _numbers.size(); i++)
	{
		char current = _numbers[i];
		if(!isOperator(current))
		{
			// convert character digit to integer
			int digit = current - '0';
			
			if (digit < 0 || digit > 9)
				throw std::runtime_error("Invalid digit");
			st.push(digit);
		}
		else
		{
			// Operator found - need 2 operands
			if(st.size() < 2)
				throw std::runtime_error("Not enough operands");
			
			// pop two operands 
			int b = st.top(); 
			st.pop();
			
			int a = st.top(); 
			st.pop();
			
			int result; 
			switch(current)
			{
				case '+': 
					result = ADD(a,b);
					break;
				case '-': 
					result = SUBTRACT(a,b);
					break;
				case '*':
					result = MULT(a,b); 
					break; 
				case '/': 
					result = DIVIDE(a,b);
					break;
			}	
			// push result to stack
			st.push(result);
		}
	}
	
	// Final result should be single value on stack
	if(st.size() != 1)
		throw std::runtime_error("Invalid RPN expression");
	std::cout << st.top() << std::endl;
}