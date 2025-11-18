/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 12:39:19 by mknoll           ###   ########.fr       */
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
	
	// if memory was dynamically allocated we need to do deep copy 
	// each object will have there won copie 
	std::cout << "\n=== Deep Copy Tests ===" << std::endl;
	std::cout << "1. Creating original cat" << std::endl;
	Cat original;
	std::cout << "   Original brain address: " << original.getBrain() << std::endl;
	
	// allocates new brain at adress .. copies the attributes of Original
	std::cout << "2. Copy constructor test" << std::endl;
	Cat copied(original);
	std::cout << "   Copied brain address: " << copied.getBrain() << std::endl;
	
	// deletes old brain, allocates new brain, assigns attributes
	std::cout << "3. Assignment operator test" << std::endl;
	Cat assigned;
	Brain* oldBrainPtr = assigned.getBrain();
	std::cout << "   Assigned brain address before: " << oldBrainPtr << std::endl;
	assigned = original;
	Brain* newBrainPtr = assigned.getBrain();
	std::cout << "   Assigned brain address after: " << newBrainPtr << std::endl;
	std::cout << "   Same address reused? \n" << (oldBrainPtr == newBrainPtr ? "   YES (memory recycled)" : "   NO (different memory)") << std::endl;
	
	std::cout << "4. Address summary:" << std::endl;
	std::cout << "   Original:  " << original.getBrain() << std::endl;
	std::cout << "   Copied:    " << copied.getBrain() << std::endl;
	std::cout << "   Assigned:  " << assigned.getBrain() << std::endl;
	
	std::cout << "\n=== End of Testing ===" << std::endl;
	
	for(int x = 0; x < arraySize; x++)
	{
		delete animalsArray[x];
	}
	
	return 0;
}