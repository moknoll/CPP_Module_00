/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:17 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:47:49 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm() : _name("default"), _signed(false), _required_grade_signing(150), _required_grade_execute(150)
{
    std::cout << "Default Constructor called for AForm" << std::endl; 
    return; 
}

AForm::~AForm()
{
    std::cout << "Destructor called for AForm" << std::endl; 
    return ;
}

AForm::AForm(const std::string &name, const int rGradeE, const int rGradeS) : _name(name), 
    _signed(false),
    _required_grade_signing(rGradeS), 
    _required_grade_execute(rGradeE)
{
    if (rGradeE < 1 || rGradeS < 1)
    {
        throw GradeTooHighException(); 
    }
    else if (rGradeE > 150 || rGradeS > 150)
    {
        throw GradeTooLowException(); 
    }
    return ; 
}

AForm::AForm(const AForm& obj) : _name(obj._name), 
    _signed(obj._signed),
    _required_grade_signing(obj._required_grade_signing), 
    _required_grade_execute(obj._required_grade_execute)
{
    std::cout << "Copy Constructor called for AForm" << std::endl; 
    return ; 
}

// Assignment operator
AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
        this->_signed = obj._signed; 
    return *this;
}

// Getters
const std::string &AForm::getName() const 
{
    return _name;
}

int AForm::getRGradeE() const
{
    return _required_grade_execute; 
}

int AForm::getRGradeS() const
{
    return _required_grade_signing; 
}

bool AForm::getSigned() const
{
    return _signed; 
}

//Exception Classes 
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed!"; 
}

//Member function
void AForm::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() > this->_required_grade_signing)
        throw GradeTooLowException();
    _signed = true;
}

//Stream overload
std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << f.getName() 
       << " is " << (f.getSigned() ? "signed" : "not signed") 
       << ", required grade to sign: " << f.getRGradeS() 
       << ", required grade to execute: " << f.getRGradeE();
    return os;
}