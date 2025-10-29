/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:32:53 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 14:15:33 by mknoll           ###   ########.fr       */
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
		
		//Constructor & Deconstructor
		Zombie( std::string name );
		~Zombie();
};


Zombie *newZombie( std:: string name );
void randomChump( std:: string name ); 

#endif 