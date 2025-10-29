/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:52:04 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 11:44:19 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << "Constructor Called for HumanA" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Deconstructed HumanA" << std::endl; 
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl; 
}