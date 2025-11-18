/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:12:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:56:20 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat() : AAnimal()
{
	std:: cout << "Default Constructor called for Cat" << std::endl;
	type = "Cat";
	return ;	
}

Cat:: ~Cat()
{
	std:: cout << "Destructor called for Cat" << std::endl;
	return ;
}


Cat::Cat( const Cat &obj): AAnimal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat &Cat:: operator=( const Cat &obj)
{
	std:: cout<< "Cat assignement constructor called" << std::endl;
	if(this != &obj)
	{
		AAnimal::operator=(obj);
	}
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Miau Miau" << std::endl;
	return ;	
}

