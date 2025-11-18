/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:12:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:39:59 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat() : Animal()
{
	std:: cout << "Default Constructor called for cat" << std::endl;
	type = "Cat";
	return ;	
}

Cat:: ~Cat()
{
	std:: cout << "Destructor called for cat" << std::endl;
	return ;
}

void Cat::makeSound() const 
{
	std::cout << "Miau Miau" << std::endl;
	return ;	
}