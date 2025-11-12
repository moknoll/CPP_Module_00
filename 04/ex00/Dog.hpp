/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:34:04 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
    public: 
        Dog(); 
        ~Dog(); 
        // Dog(std::string name);
        // Dog( const Dog &obj);
        // Dog &operator=( const Dog &obj);
		void makeSound() const;
};

#endif