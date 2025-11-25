/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:16:19 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 12:23:32 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base::~Base()
{
    std::cout << "Destructor called dor Base " << std::endl;
    return ; 
}


Base *Base::generate()
{
    //random pointer to Base class 
}

void Base::identify(Base *p)
{
    
}

void Base::identify(Base &p)
{
    
}