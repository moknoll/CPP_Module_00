/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:22:18 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 15:09:43 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie{
	private:
		std::string name;
		
	public: 
		void announce( void );
		void setName(std::string n);
		
		//Default-Constructor & Deconstructor
		Zombie();
		~Zombie();
};

Zombie* zombieHorde ( int N, std::string name);

#endif 