/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/12 14:59:45 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "=== Normal Tests ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	

	std::cout << "=== Wrong Tests ===" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	
	meta2->makeSound();
	i2->makeSound();
	
	delete meta2;
	delete i2;

	std::cout << "=== WrongCat Sound check ===" << std::endl;
	WrongCat checkSound;
	
	checkSound.makeSound();
	return 0;
}