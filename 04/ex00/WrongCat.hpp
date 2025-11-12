/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/12 14:56:32 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public: 
        WrongCat(); 
        ~WrongCat(); 
        // Cat(std::string name);
        // Cat( const Cat &obj);
        // Cat &operator=( const Cat &obj);
		void makeSound() const ; // This does not override 

};

#endif