/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 08:51:57 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/21 12:51:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Constructor called for Intern" << std::endl; 
    return ;
}

Intern::~Intern()
{
    std::cout << "Destructor called for Intern" << std::endl; 
    return ; 
}

Intern::Intern(const Intern &obj)
{
    (void)obj;
    std::cout << "Copy constructor called for Intern" << std::endl; 
    return; 
}

Intern &Intern::operator=(const Intern &obj)
{
    std::cout << "Copy Assignment called for Intern" << std::endl; 
    if(this != &obj)
    {
        (void)obj;
    }
    return *this; 
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    if (target.empty())
        throw std::invalid_argument("No target input");
    
    std::string types[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    
    int formType = -1;
    for (int i = 0; i < 3; i++)
    {
        if (formName == types[i])
        {
            formType = i;
            break;
        }
    }
    
    switch (formType)
    {
        case 0:
            std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates RobotomyRequestForm" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates PresidentialPardonForm" << std::endl;
            return new PresidentialPardonForm(target);
        default:
            throw std::invalid_argument("No form with this name available");
    }
}