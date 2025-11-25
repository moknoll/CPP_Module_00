/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:39:38 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 15:05:32 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string> 

int main()
{
    std::cout << "=== Array Template Tests ===" << std::endl;

    Array<int> a;
    Array<int> b(5);
    Array<std::string> c(3);
    
    std::cout << "Size of a: " << a.size() << std::endl;
    std::cout << "Size of b: " << b.size() << std::endl;
    std::cout << "Size of c: " << c.size() << std::endl;
    
    // Fill and display arrays
    for (unsigned int i = 0; i < b.size(); i++)
        b[i] = (i + 1) * 10;
        
    c[0] = "Hello"; c[1] = "World"; c[2] = "!";
    
    std::cout << "Array b: ";
    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;
    
    std::cout << "Array c: ";
    for (unsigned int i = 0; i < c.size(); i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;
    
    std::cout << "\n2. === Deep Copy Tests ===" << std::endl;
    Array<int> d(b);  // Copy constructor
    Array<int> e(3);
    e = b;           // Assignment operator
    b[0] = 999;
    std::cout << "Original b after modification: " << b[0] << " " << b[1] << std::endl;
    std::cout << "Copied d (should be unchanged): " << d[0] << " " << d[1] << std::endl;
    std::cout << "Assigned e (should be unchanged): " << e[0] << " " << e[1] << std::endl;

    std::cout << "\n3. === Exception Handling ===" << std::endl;
    try 
    {
        std::cout << "Accessing b[10] (out of bounds)..." << std::endl;
        std::cout << b[10] << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }
    
    try 
    {
        std::cout << "Accessing empty array a[0]..." << std::endl;
        std::cout << a[0] << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }
    
    std::cout << "\n=== All tests completed! ===" << std::endl;
    return 0;
}