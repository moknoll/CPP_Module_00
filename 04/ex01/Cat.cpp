/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:12:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:29:46 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat() : Animal()
{
	brain = new Brain();
	// std:: cout << "Default Constructor called for Cat" << std::endl;
	type = "Cat";
	return ;	
}

Cat:: ~Cat()
{
	std:: cout << "Destructor called for Cat" << std::endl;
	delete brain;
	return ;
}

// allocates new brain at adress .. copies the attributes of Original
Cat::Cat( const Cat &obj): Animal(obj)
{
	// std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
	return ;
}

// deletes old brain, allocates new brain, assigns attributes
Cat &Cat:: operator=( const Cat &obj)
{
	// std:: cout<< "Cat assignement constructor called" << std::endl;
	if(this != &obj)
	{
		// Call parent class assignment operator to properly copy inherited attributes
		// This ensures 'type' and other Animal members are correctly assigned
		Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Miau Miau" << std::endl;
	return ;	
}

Brain* Cat::getBrain() const
{
	return brain;
}

