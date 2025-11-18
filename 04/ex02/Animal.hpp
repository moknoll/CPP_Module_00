/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:57 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/17 14:34:08 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal{
    protected: 
        std::string type; 
    
    public:
        Animal(); 
        virtual ~Animal(); 
        Animal( const Animal &obj);
        Animal &operator=( const Animal &obj);
        
        std::string getType() const ;
        virtual void makeSound() const = 0; 
}; 

#endif