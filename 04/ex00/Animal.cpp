/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/12 14:43:45 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal() : type("Animal"){
    std::cout << "Default Constructor called for Animal" << std::endl;
    return ; 
}

Animal:: ~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl; 
    return ;
}

// Animal:: Animal(const Animal &obj) : type("Animal")
// {
//     std::cout << "Copy constructor called for Animal" << std::endl;
//     return ;
// }


// Animal:: Animal operator=(const Animal &obj )
// {

//     return; 
// }

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std:: cout << "Some other Animal noise..." << std::endl; 
    return ;
}