/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:02:26 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 11:29:19 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAPP_HPP
#define CLAP_TRAPP_HPP

#include <iostream>
#include <string> 

class ClapTrap{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
		ClapTrap( );
		~ClapTrap();
		ClapTrap( std:: string name );
		ClapTrap( const ClapTrap &obj );
		ClapTrap &operator=(const ClapTrap &obj );

		void attack( const std::string& target);
		void takeDamage( unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif