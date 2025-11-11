/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:57 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/11 12:33:32 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP
#include <iostream>
#include <string>

class Animal{
    protected: 
        std::string type; 
    
    public:
        Animal(); 
        ~Animal(); 
        void Animal();

        std::string getType(); 
        void        setType(); 
}; 

class Dog: public Animal{
    private: 
        std::string name; 
    public: 
        Dog(); 
        ~Dog(); 
        void Dog(std::string name); 

        void makeSound();
}; 

class Cat: public Animal{
    private: 
        std::string name; 
    public: 
        Cat(); 
        ~Cat(); 
        void Cat(std::string name); 

        void makeSound();
};

#endif