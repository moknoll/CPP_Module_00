/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:38 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:24:05 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private: 
        Brain *brain;
    public: 
        Cat(); 
        virtual ~Cat(); 
        Cat( const Cat &obj);
        Cat &operator=( const Cat &obj);
        
		void makeSound() const ;
        Brain* getBrain() const;

};

#endif