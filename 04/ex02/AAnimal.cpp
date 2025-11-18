/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 12:52:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal:: AAnimal() : type("AAnimal"){
    std::cout << "Default Constructor called for AAnimal" << std::endl;
    return ; 
}

AAnimal:: ~AAnimal()
{
    std::cout << "Destructor for AAnimal called" << std::endl; 
    return ;
}

AAnimal::AAnimal( const AAnimal &obj)
{
	std:: cout << "AAnimal Copy constructor called" << std::endl;
    this->type = obj.type;
	return ;
}

AAnimal &AAnimal::operator=( const AAnimal &obj)
{
	std:: cout << "AAnimal Copy assignement Operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

std::string AAnimal::getType() const
{
    return type;
}
