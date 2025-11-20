/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:39:17 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:06:52 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form() : _name("default"), _signed(false), _required_grade_signing(150), _required_grade_execute(150)
{
    std::cout << "Default Constructor called for Form" << std::endl; 
    return; 
}

Form::~Form()
{
    std::cout << "Destructor called for Form" << std::endl; 
    return ;
}

Form::Form(const std::string &name, const int rGradeE, const int rGradeS) : _name(name), 
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

Form::Form(const Form& obj) : _name(obj._name), 
    _signed(obj._signed),
    _required_grade_signing(obj._required_grade_signing), 
    _required_grade_execute(obj._required_grade_execute)
{
    std::cout << "Copy Constructor called for Form" << std::endl; 
    return ; 
}

// Form &Form:: operator=(const Form &obj)
// Form &Form::operator=(const Form &obj)
// {
//     if (this != &obj)
//         this->_signed = obj._signed; 
//     return *this;
// }

// Getters
const std::string &Form::getName() const 
{
    return _name;
}

int Form::getRGradeE() const
{
    return _required_grade_execute; 
}

int Form::getRGradeS() const
{
    return _required_grade_signing; 
}

bool Form::getSigned() const
{
    return _signed; 
}

//Eception Classes 
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

//Member function
void Form::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() > this->_required_grade_signing)
        throw GradeTooLowException();
    _signed = true;
}

//Stream overload
std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << f.getName() 
       << " is " << (f.getSigned() ? "signed" : "not signed") 
       << ", required grade to sign: " << f.getRGradeS() 
       << ", required grade to execute: " << f.getRGradeE();
    return os;
}