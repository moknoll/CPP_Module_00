/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:46:29 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/28 16:28:28 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main() {
    Weapon club("crude spiked club");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    
    return 0;
}