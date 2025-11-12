/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:10 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:56:16 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal() : type("Animal"){
    std::cout << "Default Constructor called for WrongAnimal" << std::endl;
    return ; 
}

WrongAnimal:: ~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal called" << std::endl; 
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

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std:: cout << "Some other wrong Animal noise..." << std::endl; 
    return ;
}