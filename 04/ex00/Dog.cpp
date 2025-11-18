/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:57:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:39:50 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
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

void Dog::makeSound() const 
{
	std::cout << "Woof Woof" << std::endl;
	return ;	
}

