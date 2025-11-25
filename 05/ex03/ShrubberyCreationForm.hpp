/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:55 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:23:55 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{  
   private:
   std::string _target;
   
   public: 
   ShrubberyCreationForm(); 
   ShrubberyCreationForm(const std::string& target);
   ShrubberyCreationForm(const ShrubberyCreationForm &obj);
   ~ShrubberyCreationForm(); 
   ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj); 
   void execute(Bureaucrat const & executor) const;
   std::string getTarget() const;
};; 



#endif