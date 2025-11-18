/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:19:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 11:13:08 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap Bob("Bob");
	std::string Ross = "Ross";

	Bob.attack(Ross);
	Bob.beRepaired(10);
	Bob.takeDamage(10);
	
	std::cout << "\n=== Testing multiple attacks ===" << std::endl;
	ClapTrap Alice("Alice");
	
	Alice.attack("Enemy1");
	Alice.attack("Enemy2");
	Alice.beRepaired(5);
	Alice.takeDamage(15);
	Alice.attack("Enemy3");
	
	std::cout << "\n=== End of Tests ===" << std::endl;
	
	return (0);
}