/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:39:56 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:26:38 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon(const std::string &type);
		~Weapon();

		//getter
		const std::string getType();
		//setter
		void setType( std::string type );
};

#endif