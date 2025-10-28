/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:46:09 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:09:23 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA{
	private:
		Weapon &weapon;
		std:: string name;
		
	public:
		HumanA(std:: string name, Weapon &weapon);
		~HumanA();
		void attack();
};


#endif