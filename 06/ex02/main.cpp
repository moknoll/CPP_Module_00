/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:52:35 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 14:58:03 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    // Initialize random seed for generate() function
    srand(time(NULL));
    
    std::cout << "=== Identify real type ===" << std::endl;
    
    // Generate and identify multiple random objects
    std::cout << "\n1. Testing random generation and identification:" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\n--- Test " << (i + 1) << " ---" << std::endl;
        
        // Generate random object
        Base* obj = Base::generate();
        std::cout << "Generated object, identifying..." << std::endl;
        
        // Test pointer identification
        std::cout << "Pointer identify: ";
        Base::identify(obj);
        
        // Test reference identification  
        std::cout << "Reference identify: ";
        Base::identify(*obj);
        
        // Clean up
        delete obj;
    }
    
    // Test 2: Test with known objects
    std::cout << "\n\n2. Testing with known object types:" << std::endl;
    
    std::cout << "\n--- Creating A object ---" << std::endl;
    Base* a = new A();
    std::cout << "Pointer identify: ";
    Base::identify(a);
    std::cout << "Reference identify: ";
    Base::identify(*a);
    delete a;
    
    std::cout << "\n--- Creating B object ---" << std::endl;
    Base* b = new B();
    std::cout << "Pointer identify: ";
    Base::identify(b);
    std::cout << "Reference identify: ";
    Base::identify(*b);
    delete b;
    
    std::cout << "\n--- Creating C object ---" << std::endl;
    Base* c = new C();
    std::cout << "Pointer identify: ";
    Base::identify(c);
    std::cout << "Reference identify: ";
    Base::identify(*c);
    delete c;
    
    std::cout << "\n=== All tests completed ===" << std::endl;
    
    return 0;
}