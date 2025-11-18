/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:57:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:11:58 by moritzknoll      ###   ########.fr       */
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

Dog::Dog(const Dog &obj) : Animal(obj)
{
	// std:: cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
	return ;
}

Dog &Dog::operator=(const Dog &obj) 
{
	// std::cout << "Dog assigment constructor called" << std::endl;
	if (this != &obj)
	{
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

