/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:11 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:35:24 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "=== Construction ===" << std::endl;
    Bureaucrat Bob("Bob", 25);
    Bureaucrat Ross("Ross", 150);
    Bureaucrat Tom("Tom", 1);

    Form contract("TopSecret", 50, 30);
    Form simpleForm("Simple", 100, 100);

    try
    {
        std::cout << Bob << std::endl;
        std::cout << Ross << std::endl;
        std::cout << Tom << std::endl;

        std::cout << contract << std::endl;
        std::cout << simpleForm << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n=== Testing Form Signing ===" << std::endl;
    try
    {
        Bob.signForm(contract); // should work
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Ross.signForm(contract); //should throw exception
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Tom.signForm(simpleForm); // should work
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n=== After Signing Attempts ===" << std::endl;
    std::cout << contract << std::endl;
    std::cout << simpleForm << std::endl;

    std::cout << "\n=== Destructors called ===" << std::endl;
    return 0;
    
}