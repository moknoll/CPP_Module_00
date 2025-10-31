/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:33:27 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 18:54:34 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap(){
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout<< "FragTrap default constructor called" << std::endl; 
}

FragTrap::FragTrap( std:: string name ) : ScavTrap(name){
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" <<std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " requests a positive high five!" << std::endl;
}