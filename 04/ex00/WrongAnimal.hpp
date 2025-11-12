/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:13 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:55:57 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal{
    protected: 
        std::string type; 
    
    public:
        WrongAnimal(); 
        ~WrongAnimal(); //not virtual 
        // Animal();
        // Animal( const Animal &obj);
        // Animal &operator=( const Animal &obj);
        
        std::string getType() const ;
        void makeSound() const; // not virtual 
}; 

#endif