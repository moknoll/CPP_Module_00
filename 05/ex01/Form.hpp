/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:56:31 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:06:39 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

//Forward declaration
class Bureaucrat;

class Form{
    const std::string _name; 
    bool _signed; 
    const int _required_grade_signing;
    const int _required_grade_execute;

    public: 
    Form();
    Form(const std::string &name, const int rGradeE, const int rGradeS);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    
    // getters
    const std::string& getName() const;
    int getRGradeS() const;
    int getRGradeE() const;
    bool getSigned() const; 

    // member Functions
    void beSigned(const Bureaucrat &b);

    // Exceptions
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

// Stream operator overload
std::ostream& operator<<(std::ostream& os, const Form& b);

#endif