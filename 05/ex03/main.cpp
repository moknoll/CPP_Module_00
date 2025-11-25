/* ************************************************************************** */
/*                                                                            */
/*                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:11 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/21 09:20:00 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <ctime> 

int main()
{
    srand(time(NULL));  // For random number in RobotomyRequestForm
    
    std::cout << "=== Testing Intern Class ===" << std::endl;
    
    // Create bureaucrats for testing
    Bureaucrat highRank("Alice", 1);       // High rank - can do everything
    Bureaucrat midRank("Bob", 50);          // Mid rank
    
    // Create intern
    Intern intern;
    
    std::cout << "\n=== Test 1: Valid Form Creation ===" << std::endl;
    
    // Test creating ShrubberyCreationForm
    try {
        std::cout << "Creating ShrubberyCreationForm:" << std::endl;
        AForm* form1 = intern.makeForm("ShrubberyCreationForm", "Garden");
        std::cout << *form1 << std::endl;
        
        // Test signing and execution
        form1->beSigned(highRank);
        form1->execute(highRank);
        
        delete form1;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    // Test creating RobotomyRequestForm  
    try {
        std::cout << "\nCreating RobotomyRequestForm:" << std::endl;
        AForm* form2 = intern.makeForm("RobotomyRequestForm", "Bender");
        std::cout << *form2 << std::endl;
        
        // Test signing and execution (try multiple times for randomness)
        form2->beSigned(highRank);
        std::cout << "First attempt:" << std::endl;
        form2->execute(highRank);
        std::cout << "Second attempt:" << std::endl;
        form2->execute(highRank);
        
        delete form2;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    // Test creating PresidentialPardonForm
    try {
        std::cout << "\nCreating PresidentialPardonForm:" << std::endl;
        AForm* form3 = intern.makeForm("PresidentialPardonForm", "Hunter Biden");
        std::cout << *form3 << std::endl;
        
        // Test signing and execution
        form3->beSigned(highRank);
        form3->execute(highRank);
        
        delete form3;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== Test 2: Invalid Form Name ===" << std::endl;
    
    // Test with invalid form name
    try {
        std::cout << "Trying to create unknown form:" << std::endl;
        AForm* form4 = intern.makeForm("InvalidForm", "Target");
        delete form4;  // This line should never be reached
    } catch (std::exception &e) {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== Test 3: Empty Target ===" << std::endl;
    
    // Test with empty target
    try {
        std::cout << "Trying to create form with empty target:" << std::endl;
        AForm* form5 = intern.makeForm("ShrubberyCreationForm", "");
        delete form5;  // This line should never be reached
    } catch (std::exception &e) {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== Test 4: Intern Copy Operations ===" << std::endl;
    
    // Test intern copy constructor and assignment
    try {
        Intern intern2(intern);        // Copy constructor
        Intern intern3;
        intern3 = intern;              // Assignment operator
        
        // Both should work the same way
        AForm* form6 = intern2.makeForm("RobotomyRequestForm", "Wall-E");
        AForm* form7 = intern3.makeForm("ShrubberyCreationForm", "Park");
        
        std::cout << "Intern copy works fine!" << std::endl;
        
        delete form6;
        delete form7;
    } catch (std::exception &e) {
        std::cerr << "Copy error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== End of Intern Tests ===" << std::endl;
    
    return 0;
}
