/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:24 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/04 09:40:14 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Set Value by default to 0
Fixed::Fixed(): value(0) {
	std::cout << "Default construcor called" << std::endl;
	return ;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ; 
}

// copies value from obj
Fixed::Fixed(const Fixed &obj){
	std:: cout << "Copy constructor called" << std::endl;
	value = obj.value;
	return ;
}

// assign new values to existing Object 
Fixed& Fixed::operator=(const Fixed &obj){
	std:: cout << "Copy assignement operator called" << std::endl;
	//Guard selfassignement 
	if (this != &obj)
		value = obj.value;
	return *this;
}

int Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw; 
	return; 
}

