/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:57:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:30:12 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	brain = new Brain();
	// std::cout << "Default constructor called for Dog" << std::endl;
	type = "Dog";
	return ;
}

Dog:: ~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
	delete brain;
	return ;
}

// allocates new brain at adress .. copies the attributes of Original
Dog::Dog(const Dog &obj) : Animal(obj)
{
	// std:: cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
	return ;
}

// deletes old brain, allocates new brain, assigns attributes
Dog &Dog::operator=(const Dog &obj) 
{
	// std::cout << "Dog assigment constructor called" << std::endl;
	if (this != &obj)
	{
		// Call parent class assignment operator to properly copy inherited attributes
		// This ensures 'type' and other Animal members are correctly assigned
		Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return *this;
}


void Dog::makeSound() const 
{
	std::cout << "Woof Woof" << std::endl;
	return ;	
}

Brain* Dog::getBrain() const
{
	return brain;
}

