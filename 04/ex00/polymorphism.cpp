/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/11 12:31:54 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.hpp"

Animal:: Animal(){
    std::cout << "Default Constructor called for Animal\n" << std::endl;
    return ; 
}

Animal:: ~Animal()
{
    std::cout << "Destructor for Animal called\n" << std::endl; 
    return ;
}

void Animal