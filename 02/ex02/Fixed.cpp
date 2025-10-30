/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:24 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 18:41:03 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
	std::cout << "Default construcor called" << std::endl;
}
Fixed::Fixed(const int n) {
	this->value = n << fractBits;
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float f){
	this->value = roundf(f * (1 << fractBits)); 
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj){
	std:: cout << "Copy constructor called" << std::endl;
	value = obj.value;
} 
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


// comparision Operators 
bool Fixed:: operator>(const Fixed &obj) const {
	return this->value > obj.value;
}
bool Fixed:: operator<(const Fixed &obj) const {
	return this->value < obj.value;
}
bool Fixed:: operator>=(const Fixed &obj) const {
	return this->value >= obj.value;
}
bool Fixed:: operator<=(const Fixed &obj) const {
	return this->value <= obj.value;
}
bool Fixed:: operator==(const Fixed &obj) const {
	return this->value == obj.value;
}
bool Fixed:: operator!=(const Fixed &obj) const {
	return this->value != obj.value;
}

// arithmetic operator 
Fixed Fixed::operator+(const Fixed &obj) const{
	Fixed result;
	result.setRawBits(this->value + obj.value);
	return result;
};
Fixed Fixed::operator-(const Fixed &obj) const{
	Fixed result;
	result.setRawBits(this->value - obj.value);
	return result;
}
Fixed Fixed::operator*(const Fixed &obj) const{
	return (Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator/(const Fixed &obj) const{
	return ((this->toFloat() / obj.toFloat()));
}

// Decrement / Incremern 

// Prefix
Fixed &Fixed::operator++(){
	value++;
	return *this;
	
}

//postfix
Fixed Fixed::operator++(int){
	Fixed temp = *this;
	value++;
	return temp;
}

Fixed &Fixed::operator--(){
	value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	value--;
	return *this;
}