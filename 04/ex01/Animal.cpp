/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 10:44:52 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal() : type("Animal"){
    // std::cout << "Default Constructor called for Animal" << std::endl;
    return ; 
}

Animal:: ~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl; 
    return ;
}

Animal::Animal( const Animal &obj)
{
	// std:: cout << "Animal Copy constructor called" << std::endl;
    this->type = obj.type;
	return ;
}

Animal &Animal::operator=( const Animal &obj)
{
	// std:: cout << "Animal Copy assignement Operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std:: cout << "Some other Animal noise..." << std::endl; 
    return ;
}