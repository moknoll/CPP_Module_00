/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:29:43 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 11:41:43 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name): ClapTrap(name){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;
	return ;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" <<std::endl;
	return ;
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


void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}