/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:15:48 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 11:22:43 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Default constructor
Data::Data() : _id(0), _name("default"), _value(0.0) {
	// std::cout << "Data default constructor called" << std::endl;
}

// Parameterized constructor
Data::Data(int id, const std::string& name, double value) : _id(id), _name(name), _value(value) {
	// std::cout << "Data parameterized constructor called" << std::endl;
}

// Copy constructor
Data::Data(const Data& other) : _id(other._id), _name(other._name), _value(other._value) {
	// std::cout << "Data copy constructor called" << std::endl;
}

// Destructor
Data::~Data() {
	// std::cout << "Data destructor called" << std::endl;
}

// Assignment operator
Data& Data::operator=(const Data& other) {
	// std::cout << "Data assignment operator called" << std::endl;
	if (this != &other) {
		_id = other._id;
		_name = other._name;
		_value = other._value;
	}
	return *this;
}

// Getters
int Data::getId() const {
	return _id;
}

std::string Data::getName() const {
	return _name;
}

double Data::getValue() const {
	return _value;
}

