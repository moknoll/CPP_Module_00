/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:54:03 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 18:42:46 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(4.5f);
	Fixed const c(10);
	Fixed const d(22);

	std::cout << "\nTesting with a = " << a << std::endl;
	std::cout << "Testing with b = " << b << std::endl;
	std::cout << "Testing with c = " << c << std::endl;
	std::cout << "Testing with d = " << d << std::endl;

	std::cout << "\n======Comparison Tests=====" << std::endl;
	if (a == b)
		std::cout << "A equal B" << std::endl;
	if(a < c)
		std::cout << a << " < " << c << std::endl;
	if (d > c)
		std::cout << d << " > " << c << std::endl;
	if (a != c)
		std::cout << a << " != " << c << std::endl;
	std::cout << "\n======Arithmetic Tests=====" << std::endl;
	Fixed sum = c + b;
	std::cout << c << " + " << b << " = " << sum << std::endl;
	
	Fixed minus = a - b;
	std::cout << a << " - " << b << " = " << minus << std::endl;

	Fixed prod = d / c;
	std::cout << d << " / " << c << " = " << prod << std::endl;	
	
	Fixed mult = d * c;
	std::cout << d << " * " << c << " = " << mult <<"\n"<< std::endl;

	std::cout << "\n=== Decrement / Increment ===" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	
	
	return 0;
}