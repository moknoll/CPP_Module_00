/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:46:09 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:27:11 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std:: string name;
		
	public:
		HumanB(std::string  name);
		~HumanB();
				
		void setWeapon(Weapon &Weapon);
		void attack();
};

#endif