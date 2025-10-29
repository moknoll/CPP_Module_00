/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:46:09 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 11:39:45 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
		
	public:
		HumanB(std::string  name);
		~HumanB();
				
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif