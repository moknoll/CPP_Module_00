/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:09 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/21 12:49:41 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact {
    private: 
        std ::string first_name;
        std ::string last_name;
        std ::string nickname;
        std ::string darkest_secret;
        std ::string phone_number;
    public: 
    
};


class PhoneBook {
    public: 
        Contact contacts[8];
        // contact
        void ADD(Contact &c){
            
        }
        void SEARCH(Contact &c){
            // display a list of 4 columns indeex first name, last name, nickname
            // each column must be 10 charactes wide 
            // seperatet by a pipe 
            // text must be right aligned 
            // if longer than 10 
        }
        void EXIT(){
            // quit and delete all contacts 
        }
};


