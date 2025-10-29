/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:54:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 11:47:19 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std:: string name)
{
	std::cout << "Constructor Called for HumanB" << std::endl;
	this->name = name;
	this->weapon = NULL; 
}

HumanB::~HumanB()
{
	std::cout << "Deconstructed HumanB" << std::endl; 
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (weapon)
		std::cout << this->name << " Attacks with their " << weapon->getType() << std::endl;
	else 
		std::cout << this->name << " has no weapon to Attack" << std::endl;
}