/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:50 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:32:07 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    std::cout << "Default Constructor called for RobotomyRequestForm" << std::endl;
    return ; 
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
    return ; 
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : 
    AForm("RobotomyRequestForm", 72, 45),
    _target(target)
{
    std::cout << "Constructor called for RobotomyRequestForm with target " << getTarget() << std::endl;
    return ; 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : 
    AForm(obj), _target(obj._target)
{
    std::cout << "Copy Constructor called for RobotomyRequestForm" << std::endl; 
    return ; 
}

// Assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        this->_target = obj._target; 
    }
    return *this;
}

// Getter
std::string RobotomyRequestForm::getTarget() const
{
    return _target; 
}

// Execute function - implement your robotomy logic here
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    // check exec grade
    if(executor.getGrade() > getRGradeE())
        throw GradeTooLowException(); 

    // check if signed 
    if(!getSigned())
        throw FormNotSignedException();

    // Robotomy implementation
    std::cout << "* BZZZZZZT! WRRRRRR! CLANK CLANK! *" << std::endl;
    std::cout << "* Making some drilling noises... *" << std::endl;
    
    // 50% success rate 
    if (rand() % 2 == 0) {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << _target << "!" << std::endl;
    }
}

