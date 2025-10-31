/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapp.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:02:26 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 13:26:47 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAPP_HPP
#define CLAP_TRAPP_HPP

#include <iostream>
#include <string> 

class ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
		// constructor 1 constructor missing 
		ClapTrap( void );
		~ClapTrap();
		ClapTrap( std:: string name );

		void attack( const std::string& target);
		void takeDamage( unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif