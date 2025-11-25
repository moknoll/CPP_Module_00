/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:32:40 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include "AForm.hpp"


class RobotomyRequestForm: public AForm
{  
   private:
   std::string _target;
   
   public: 
   RobotomyRequestForm(); 
   RobotomyRequestForm(const std::string& target);
   RobotomyRequestForm(const RobotomyRequestForm &obj);
   ~RobotomyRequestForm(); 
   RobotomyRequestForm& operator=(const RobotomyRequestForm &obj); 
   void execute(Bureaucrat const & executor) const;
   std::string getTarget() const;
};

#endif

