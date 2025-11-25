/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:10:34 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 11:47:33 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	// std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::~Serializer() {
	// std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &obj) {
	// std::cout << "Serializer copy constructor called" << std::endl;
	(void)obj;
}

Serializer &Serializer::operator=(const Serializer &obj) {
	// std::cout << "Serializer assignment operator called" << std::endl;
	(void)obj;
	return *this;
}


//convert a pointer of some data type into a pointer of another data type,
//even if the data types before and after conversion are different
uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr); 
}


Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw); 
}