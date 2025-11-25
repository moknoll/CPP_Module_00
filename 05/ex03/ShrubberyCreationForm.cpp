/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:53 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:23:49 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145), _target("default")
{
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    return ; 
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
    return ; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : 
    AForm("ShrubberyCreationForm", 137, 145),
    _target(target)
{
    std::cout << "Constructor called for ShrubberyCreationForm with target " << getTarget() << std::endl;
    return ; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : 
    AForm(obj), _target(obj._target)
{
    std::cout << "Copy Constructor Called for ShrubberyCreationForm" << std::endl;
    return ; 
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    // check exec grade
    if(executor.getGrade() > getRGradeE())
        throw GradeTooLowException(); 

    // check if signed 
    if(!getSigned())
        throw std::runtime_error("Form is not signed");

    // Perform ascii Tree create file
    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open())
        throw std::runtime_error("Could not create file");
        
    file << "   ccee88oo\n"
            " C8O8O8Q8PoOb o8oo\n"
            " dOB69QO8PdUOpugoO9bD\n"
            "CgggbU8OU qOp qOdoUOdcb\n"
            "    6OuU  /p u gcoUodpP\n"
            "      \\//  /douUP\n"
            "        \\////\n"
            "         |||/\n"
            "         |||\n"
            "         |||\n"
            "   .....//||||\\....\n";
    file.close();
}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target; 
}