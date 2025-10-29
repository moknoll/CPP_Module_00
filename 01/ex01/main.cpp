/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:23:16 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 14:58:04 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(){
	int N = 10;
	Zombie *horde = zombieHorde(N, "ZombieBOB");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}