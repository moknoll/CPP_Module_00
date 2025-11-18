/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:18:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/18 12:52:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    
    // Every animal has to make sound, but every does it different
    // AAnimal only defines the rule 
    //encourages derived classes to implement on there own
    dog->makeSound();
    cat->makeSound();
    
    // Not possible to create a object of abstract class 
    // AAnimal directAnimal;  // ERROR: cannot instantiate abstract class
    // AAnimal* directPtr = new AAnimal();  // ERROR: cannot instantiate abstract class
    
    delete dog;
    delete cat;
    
    return 0;
}