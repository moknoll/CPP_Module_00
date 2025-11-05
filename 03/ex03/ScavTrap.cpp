/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:29:43 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 16:30:04 by mknoll           ###   ########.fr       */
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

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}