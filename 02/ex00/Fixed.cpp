/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:24 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 15:04:54 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Set Value by default to 0
Fixed::Fixed(): value(0) {
	std::cout << "Default construcor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

// copies value from obj
Fixed::Fixed(const Fixed &obj){
	std:: cout << "Copy constructor called" << std::endl;
	value = obj.value;
}

// assign new values to existing Object 
Fixed& Fixed::operator=(const Fixed &obj){
	std:: cout << "Copy assignement operator called" << std::endl;
	if (this != &obj)
		value = obj.value;
	return *this;
}

int Fixed::getRawBits( void ){
	
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits ( int const raw){
	this->value = raw;
}

