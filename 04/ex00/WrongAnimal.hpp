/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:13 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 10:33:27 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>
#include <string>

//static bindining
class WrongAnimal{
    protected: 
        std::string type; 
    
    public:
        WrongAnimal(); 
        ~WrongAnimal(); //not virtual
        std::string getType() const ;
        void makeSound() const; // not virtual 
}; 

#endif