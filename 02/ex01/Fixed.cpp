/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:24 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 15:50:35 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Set Value by default to 0
Fixed::Fixed(): value(0) {
	std::cout << "Default construcor called" << std::endl;
}

// constructor to bitshift int (n << 8) == n *256
Fixed::Fixed(const int n) {
	this->value = n << fractBits;
	std::cout << "Int constructor called" << std::endl;
}

// constructor to bitshift float (1 << 8) == 256
Fixed::Fixed(const float f){
	this->value = roundf(f * (1 << fractBits)); 
	std::cout << "Float constructor called" << std::endl;
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


// revert float back by dividing through 256
float Fixed::toFloat( void )const{
	return (static_cast<float>(this->value) / (1 << fractBits));
}

// revert int by dividing thorugh 256 
int Fixed::toInt( void )const{
	return(static_cast<int>(this->value) >> fractBits);
}

// overloading operator 
std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
	os << fixed.toFloat();
	return os;
}