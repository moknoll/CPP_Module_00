/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:03:12 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/28 16:18:54 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <exception>

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "=== Existing Span ===" << std::endl;
	sp.printNumbers();
	
	std::cout << "\n===Try adding number to Full Span ===" << std::endl;
	try 
	{
		sp.addNumber(10);
	}
	catch(std::exception &e)
	{
		std::cout <<"ERROR: " << e.what() << std::endl;
	}	
	try {
		std::cout << "\n=== Test spans ===" << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " <<sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << "\n=== Test shortest span with 1 element ===" << std::endl;
		Span sp2 = Span(1);
		sp2.addNumber(1);
		std::cout << sp2.shortestSpan() << std::endl;
		}
	catch(std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	try 
	{
		std::cout << "\n=== Test longest span with 1 element ===" << std::endl;
		Span sp2 = Span(1);
		sp2.addNumber(1);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	return 0;
}