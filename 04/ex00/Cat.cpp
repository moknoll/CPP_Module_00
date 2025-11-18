/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:12:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 10:40:45 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat() : Animal()
{
	// std:: cout << "Default Constructor called for Cat" << std::endl;
	type = "Cat";
	return ;	
}

Cat:: ~Cat()
{
	std:: cout << "Destructor called for Cat" << std::endl;
	return ;
}

Cat::Cat( const Cat &obj): Animal(obj)
{
	// std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat &Cat:: operator=( const Cat &obj)
{
	// std:: cout<< "Cat assignement constructor called";
	if(this != &obj)
	{
		Animal::operator=(obj);
	}
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Miau Miau" << std::endl;
	return ;	
}

