/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:19:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 11:31:55 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap Bob("Bob");
	std::string Ross = "Ross";

	Bob.attack(Ross);
	Bob.beRepaired(10);
	Bob.takeDamage(10);
	
	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	ScavTrap Joe("Joe");
	
	Joe.attack(Ross);
	Joe.beRepaired(15);
	Joe.takeDamage(20);
	Joe.guardGate();
	
	std::cout << "\n=== Testing ScavTrap energy ===" << std::endl;
	ScavTrap Charlie("Charlie");
	
	// Test with more attacks to show energy usage
	Charlie.attack("Target1");
	Charlie.attack("Target2");
	Charlie.beRepaired(5);
	Charlie.takeDamage(50);
	Charlie.guardGate();
	
	std::cout << "\n=== End of Tests ===" << std::endl;
	
	return (0);
}