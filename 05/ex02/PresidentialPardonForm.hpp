/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:13:48 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/20 14:28:14 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{  
   private:
   std::string _target;
   
   public: 
   PresidentialPardonForm(); 
   PresidentialPardonForm(const std::string& target);
   PresidentialPardonForm(const PresidentialPardonForm &obj);
   ~PresidentialPardonForm(); 
   PresidentialPardonForm& operator=(const PresidentialPardonForm &obj); 
   void execute(Bureaucrat const & executor) const;
   std::string getTarget() const;
};

#endif

