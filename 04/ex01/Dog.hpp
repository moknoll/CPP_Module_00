/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 13:56:23 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private: 
        Brain *brain;
    public: 
        Dog(); 
        ~Dog(); 
        Dog( const Dog &obj);
        Dog &operator=( const Dog &obj);
		void makeSound() const;
};

#endif