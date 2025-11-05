/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:07:26 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 14:34:24 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default Constructor ClapTrap called"<< std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): hitPoints(10), energyPoints(10), attackDamage(0) {
	this->name = name;
	std::cout << name << " Constructor called "
			  << "Hit Points: " << this->hitPoints
			  << " Energy Points: " << this->energyPoints << std::endl;
}

void ClapTrap::attack( const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " 
				  << this->name << " attacks " 
				  << target << ", causing " 
				  << this->attackDamage 
			  	<< " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else 
		std::cout << "ClapTrap " << this->name << " can't attack, not enough hit points or energy!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->name << " took "
			  << amount << " damage." << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}

void ClapTrap::beRepaired ( unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs itself, it regains " 
				  << amount << " hit points." << std::endl;
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else 
		std::cout << "ClapTrap " << this->name << " cannot repair itself, not enough hit points or energy." 
				  << std::endl;
}