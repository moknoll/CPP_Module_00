/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:55:38 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:56:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat: public AAnimal{
    public: 
        Cat(); 
        virtual ~Cat(); 
        Cat( const Cat &obj);
        Cat &operator=( const Cat &obj);
		void makeSound() const ;

};

#endif