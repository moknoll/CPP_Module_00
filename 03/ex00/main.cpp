/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:19:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 13:31:26 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	ClapTrap Bob("Bob");
	std::string Ross = "Ross";

	Bob.attack(Ross);
	Bob.beRepaired(10);
	Bob.takeDamage(10);
	
	return (0);
}