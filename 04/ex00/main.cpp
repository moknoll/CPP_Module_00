/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 10:44:03 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "\n=== Normal Tests ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound
	j->makeSound(); //will output the dog sound 
	meta->makeSound();

	// std::cout << "\n=== Constructor Tests ===" << std::endl;
	
	// Dog originalDog;
	// Dog copiedDog(originalDog);
	// std::cout << "Copied Dog Type: " << copiedDog.getType() << std::endl;
	
	// Dog assignedDog;
	// assignedDog = originalDog;
	// std::cout << "Assigned Dog Type: " << assignedDog.getType() << std::endl;

	std::cout << "\n=== End tests ===" << std::endl;
	delete meta;
	delete i;
	delete j;
	
	std::cout << "\n=== Wrong Tests ===" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	
	std::cout << meta2->getType() << std::endl;
	std::cout << i2->getType() << std::endl;
	

	// static binding the default sound of animal not overriding the makesound of cat 
	meta2->makeSound();
	i2->makeSound();
	
	std::cout << "\n=== End tests ===" << std::endl;
	delete meta2;
	delete i2;

	std::cout << "\n=== WrongCat Sound check ===" << std::endl;
	WrongCat checkSound;
	
	checkSound.makeSound();
	std::cout << "\n=== End tests ===" << std::endl;
	return 0;
}