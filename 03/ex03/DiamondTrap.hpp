/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:33:16 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 11:52:13 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap{
	private: 
		std::string name;
		
	public: 
		DiamondTrap();
		~DiamondTrap(); 
		DiamondTrap(std:: string name);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);

		void attack(const std::string& target);
		void whoAmI();
};



#endif