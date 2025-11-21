/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:46 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:34:32 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
    std::cout << "Default Constructor called for PresidentialPardonForm" << std::endl;
    return ; 
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
    return ; 
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : 
    AForm("PresidentialPardonForm", 25, 5),
    _target(target)
{
    std::cout << "Constructor called for PresidentialPardonForm with target " << getTarget() << std::endl;
    return ; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : 
    AForm(obj), _target(obj._target)
{
    std::cout << "Copy Constructor called for PresidentialPardonForm" << std::endl; 
    return ; 
}

// Assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        this->_target = obj._target; 
    }
    return *this;
}

// Getter
std::string PresidentialPardonForm::getTarget() const
{
    return _target; 
}

// Execute function - implement your pardon logic here
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    // check exec grade
    if(executor.getGrade() > getRGradeE())
        throw GradeTooLowException(); 

    // check if signed 
    if(!getSigned())
        throw FormNotSignedException();

    // Presidential pardon implementation
    std::cout << "PRESIDENTIAL PARDON GRANTED " << std::endl;
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
    std::cout << "All crimes are hereby forgiven and forgotten." << std::endl;
}

