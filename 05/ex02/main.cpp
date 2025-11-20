/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:11 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 15:07:53 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ctime> 

int main()
{
    srand(time(NULL));  // For Random number
    
    std::cout << "=== Construction ===" << std::endl;
    Bureaucrat highRank("Alice", 1);    // Can Sign everything and execute
    Bureaucrat midRank("Bob", 25);      // Can sign PresidentialPardon
    Bureaucrat lowRank("Ross", 145); // Can Only Sign Shrubbery
    
    
    PresidentialPardonForm PPForm("Hunter Biden");    // sign: 25, exec: 5
    ShrubberyCreationForm SCForm("Home");             // sign: 145, exec: 137  
    RobotomyRequestForm RRForm("Marvin");     // sign: 72, exec: 45

    try
    {
        std::cout << highRank << std::endl;
        std::cout << midRank << std::endl;
        std::cout << lowRank << std::endl;

        std::cout << PPForm << std::endl; 
        std::cout << SCForm << std::endl; 
        std::cout << RRForm << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << "Construction error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Testing AForm Signing ===" << std::endl;
    
    // Test Presidential Pardon Form signing
    try {
        PPForm.beSigned(highRank);  // Alice should not be able to sign as you need grade 5 
        std::cout << "PPForm signed by " << highRank.getName() << std::endl;
    } catch(std::exception &e) {
        std::cerr << "PPForm signing error: " << e.what() << std::endl;
    }
    
    // Test Shrubbery Creation Form signing  
    try {
        SCForm.beSigned(midRank);  // Ross (grade 150) should not sign
        std::cout << "SCForm signed by " << lowRank.getName() << std::endl;
    } catch(std::exception &e) {
        std::cerr << "SCForm signing error: " << e.what() << std::endl;
    }
    
    // Test Robotomy Request Form signing
    try {
        RRForm.beSigned(midRank);  // Bob (grade 25) should sign 
        std::cout << "RRForm signed by " << midRank.getName() << std::endl;
    } catch(std::exception &e) {
        std::cerr << "RRForm signing error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Testing AForm Execution ===" << std::endl;
    
    // Test Presidential Pardon Form execution
    try {
        PPForm.execute(highRank);  // Alice (grade 1) should execute
    } catch(std::exception &e) {
        std::cerr << "PPForm execution error: " << e.what() << std::endl;
    }
    
    // Test Shrubbery Creation Form execution
    try {
        SCForm.execute(midRank);  // Ross (grade 150) should be able to execute
    } catch(std::exception &e) {
        std::cerr << "SCForm execution error: " << e.what() << std::endl;
    }
    
    // Test Robotomy Request Form execution (test a few times for randomness)
    try {
        std::cout << "\n--- First Robotomy Attempt ---" << std::endl;
        RRForm.execute(highRank);  
        std::cout << "\n--- Second Robotomy Attempt ---" << std::endl;
        RRForm.execute(highRank);  
    } catch(std::exception &e) {
        std::cerr << "RRForm execution error: " << e.what() << std::endl;
    }

    std::cout << "\n=== After Operations ===" << std::endl;
    std::cout << PPForm << std::endl;
    std::cout << SCForm << std::endl; 
    std::cout << RRForm << std::endl;

    std::cout << "\n=== Destructors called ===" << std::endl;
    return 0;
}