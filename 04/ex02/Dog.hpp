/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:25 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:56:19 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog: public AAnimal{
    public: 
        Dog(); 
        ~Dog(); 
        Dog( const Dog &obj);
        Dog &operator=( const Dog &obj);
		void makeSound() const;
};

#endif