/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:54:44 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:30:52 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std:: string name)
{
	this->name = name;
	this->weapon = NULL; 
}

HumanB::~HumanB()
{
	std::cout << "Deconstructed HumanA" << std::endl; 
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (weapon)
		std::cout << this->name << "Attacks with their" << weapon->getType() << std::endl;
	else 
		std::cout << this->name << "has no weapon to Attack" << std::endl;
}