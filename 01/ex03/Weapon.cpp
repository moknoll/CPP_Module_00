/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:42:53 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:30:22 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type){
	std::cout << "Constructor called for Weapon" << std::endl;
	this->type = type;
}

Weapon::~Weapon(){
	std::cout << "Deconstructor called for Weapon" << std::endl;
}

const std::string Weapon::getType(){
	return (Weapon::type);
}

void Weapon::setType( std::string NewType){
	this->type = NewType;
}