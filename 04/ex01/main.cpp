/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 12:15:25 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	const int arraySize = 10;
	const Animal* animalsArray[arraySize];
	
	for(int x = 0; x < arraySize; x++)
	{
		if (x < arraySize / 2)
			animalsArray[x] = new Cat();
		else 
			animalsArray[x] = new Dog();
	}
	std::cout << "\n=== Testing Array Contents ===" << std::endl;
	for(int x = 0; x < arraySize; x++)
	{
		std::cout << "Index " << x << ": " << animalsArray[x]->getType() << " says: ";
		animalsArray[x]->makeSound(); 
	}
	std::cout << "\n=== Deep Copy Tests ===" << std::endl;
	std::cout << "1. Creating original cat" << std::endl;
	Cat original;
	std::cout << "2. Copy constructor test" << std::endl;
	Cat copied = original;
	std::cout << "3. Assignment operator test" << std::endl;
	Cat assigned;
	assigned = original;  // Calls assignment operator
	std::cout << "4. All cats work independently:" << std::endl;
	original.makeSound();
	copied.makeSound();
	assigned.makeSound();
	
	std::cout << "\n=== End of Testing ===" << std::endl;
	
	for(int x = 0; x < arraySize; x++)
	{
		delete animalsArray[x];
	}
	
	return 0;
}