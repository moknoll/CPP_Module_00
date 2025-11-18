/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:23:35 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 11:17:23 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	
	public: 
		ScavTrap();
		~ScavTrap();
		ScavTrap( std::string name );
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);

		void guardGate();
};


#endif