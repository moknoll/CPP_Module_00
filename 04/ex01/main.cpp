/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/17 14:29:32 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const int arraySize = 10;
	Animal* animalsArray[arraySize];
	
	for(int x = 0; x < arraySize; x++)
	{
		if (x < arraySize / 2)
			animalsArray[x] = new Cat();
		else 
			animalsArray[x] = new Dog();
	}

	//test for deep copies 
	std::cout << "\n=== Testing Deep Copy ===" << std::endl;
	Cat originalCat;
	Cat copiedCat = originalCat;
	
	Cat assignedCat;
	assignedCat = originalCat;
	
	// Clean up single animals
	delete j;
	delete i;
	
	// Clean up array
	for(int x = 0; x < arraySize; x++)
	{
		delete animalsArray[x];
	}
	
	return 0;
}