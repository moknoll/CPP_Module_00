/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:15 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 10:40:23 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat:: WrongCat() : WrongAnimal()
{
	// std:: cout << "Default Constructor called for Wrongcat" << std::endl;
	type = "Cat";
	return ;	
}

WrongCat:: ~WrongCat()
{
	std:: cout << "Destructor called for Wrongcat" << std::endl;
	return ;
}

void WrongCat::makeSound() const 
{
	std::cout << "Wrong Miau Miau" << std::endl;
	return ;	
}