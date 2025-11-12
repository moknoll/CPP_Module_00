/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:23:35 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 11:36:38 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	
	public: 
		ScavTrap();
		~ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &obj);
		ScavTrap &operator=( const ScavTrap &obj);
		
		void guardGate();
};

#endif