/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:56:31 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:23:41 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

//Forward declaration
class Bureaucrat;

class AForm{
    const std::string _name; 
    bool _signed; 
    const int _required_grade_signing;
    const int _required_grade_execute;

    public: 
    AForm();
    AForm(const std::string &name, const int rGradeE, const int rGradeS);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();
    
    // getters
    const std::string& getName() const;
    int getRGradeS() const;
    int getRGradeE() const;
    bool getSigned() const; 

    // member Functions
    void beSigned(const Bureaucrat &b);
    virtual void execute(Bureaucrat const & executor) const = 0; 

    // Exceptions
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception {
        public: 
        virtual const char *what() const throw(); 
    };
};

// Stream operator overload
std::ostream& operator<<(std::ostream& os, const AForm& b);

#endif