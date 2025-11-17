/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:29:43 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 11:52:12 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name): ClapTrap(name){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" <<std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &obj) : ClapTrap(obj)
{
	std:: cout << "ScavTrap Copy constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	return ;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &obj)
{
	std:: cout << "ScavTrap Copy assignement Operator called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		this->hitPoints = 100;
		this->energyPoints = 50;
		this->attackDamage = 20;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout  
				  << "ScavTrap " << this->name << " attacks " 
				  << target << ", causing " 
				  << this->attackDamage 
			  	<< " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else 
		std::cout << "ScavTrap " << this->name << " can't attack, not enough hit points or energy!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}