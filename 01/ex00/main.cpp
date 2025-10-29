/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:10 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 14:58:13 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zombie1 = newZombie("ZombieBOB");
	zombie1->announce();
	
	randomChump("ZombieROSS");

	delete zombie1;
	return 0;
}