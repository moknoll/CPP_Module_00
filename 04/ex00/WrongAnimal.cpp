/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:10 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 13:22:43 by mknoll           ###   ########.fr       */
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

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std:: cout << "Some other WRONG Animal noise..." << std::endl; 
    return ;
}