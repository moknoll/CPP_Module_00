/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:15:03 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/07 13:59:56 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name")
{
    // this->hitPoints = FragTrap::hitPoints; 
    // this->energyPoints = ScavTrap::energyPoints; 
    // this->attackDamage = FragTrap::attackDamage;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30; 
    std::cout << "Default Constructor called" << std::endl;
    std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;

    return ; 
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl; 
    return ; 
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->name = name;
    // this->hitPoints = FragTrap::hitPoints; 
    // this->energyPoints = ScavTrap::energyPoints; 
    // this->attackDamage = FragTrap::attackDamage;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;    
    std::cout << "DiamondTrap " << name << " constructed" << std::endl;
    std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;
    return ; 
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name
              << ", ClapTrap name: " << ClapTrap::name << std::endl; 
    return ; 
}
