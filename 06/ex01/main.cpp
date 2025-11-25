/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:47:42 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 12:00:06 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    // Data object with a pointer to it 
    Data myData(42, "test", 420.40);
    Data* originalPtr = &myData; 
    
    std::cout << "\n=== Testing Serializer ===" << std::endl; 
    std::cout << "Original Pointer Adress:  " << originalPtr << std::endl; 
    std::cout << "Original Data -> ID:" << originalPtr->getId() 
              << ",name:  " << originalPtr->getName() << std::endl; 
    
    // Serialiye pointer to a uintrptr_t
    uintptr_t raw = Serializer::serialize(originalPtr); 
    std::cout << "Serialized to uintrptr:t:   " << raw << std::endl; 

    // Deserialize the uintptr_t back to a pointer
    Data *deserializedPtr = Serializer::deserialize(raw); 
    std::cout << "Deserialized Pointer Adress:  " << deserializedPtr << std::endl; 

    // Verification 
    std::cout << "\n===Verification===" << std::endl;
    if(originalPtr == deserializedPtr)
    {
        std::cout << "Success: The pointers are identical." << std::endl;
        std::cout << "Accessing data via deserialized pointer -> Name: " 
                  << deserializedPtr->getName() << std::endl;
    }
    else 
    {
        std::cout << "Failure the Pointes are different" << std::endl; 
    }
    return 0; 
}