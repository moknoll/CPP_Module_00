/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:57:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:56:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog() : AAnimal()
{
	std::cout << "Default constructor called for Dog" << std::endl;
	type = "Dog";
	return ;
}

Dog:: ~Dog()
{
	std::cout << "Destructor called for dog" << std::endl;
	return ;
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	std:: cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &obj) 
{
	std::cout << "Dog assigment constructor called" << std::endl;
	if (this != &obj)
	{
		AAnimal::operator=(obj);
	}
	return *this;
}


void Dog::makeSound() const 
{
	std::cout << "Woof Woof" << std::endl;
	return ;	
}

