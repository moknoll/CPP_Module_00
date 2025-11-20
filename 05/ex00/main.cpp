/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:11 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 09:49:33 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== Construction ===" << std::endl;
    Bureaucrat Bob("Bob", 25); 
    Bureaucrat Ross("Ross", 150); 
    Bureaucrat Tom("Tom", 1);
    try
    {
        std::cout << Bob << std::endl;
        std::cout << Ross << std::endl;
        std::cout << Tom << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl; 
    }
    std::cout << "\n=== Testing Borders ===" << std::endl;
    try 
    { 
        Ross.decrementGrade(); 
    } 
    catch (std::exception &e) 
    { 
        std::cerr << e.what() << std::endl; 
    }
    try 
    { 
        Tom.incrementGrade(); 
    } 
    catch (std::exception &e) 
    { 
    std::cerr << e.what() << std::endl; 
    }
    try 
    { 
        Bob.incrementGrade(); 
    } 
    catch (std::exception &e) 
    { 
        std::cerr << e.what() << std::endl; 
    }
    std::cout << "\n=== After Testing Borders ===" << std::endl;
    std::cout << Bob << std::endl;
    std::cout << Ross << std::endl;
    std::cout << Tom << std::endl;

    std::cout << "\n=== Destructors called ===" << std::endl;
    return 0; 
    
}