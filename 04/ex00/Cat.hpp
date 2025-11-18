/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:38 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:49:28 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
    public: 
        Cat(); 
        ~Cat(); 
        // Cat(std::string name);
        // Cat( const Cat &obj);
        // Cat &operator=( const Cat &obj);
		void makeSound() const ;

};

#endif