/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:33:30 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 18:46:49 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ScavTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap( std::string name );

		void highFivesGuys(void);
		
};

#endif 