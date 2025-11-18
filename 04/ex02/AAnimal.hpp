/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:57 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 11:12:53 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
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