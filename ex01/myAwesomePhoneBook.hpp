/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:09 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/23 11:43:39 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <sstream>

// Color definitions for better output readability
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"

class Contact {
    private: 
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string darkest_secret;
        std::string phone_number;

    public: 
        //setter (Encapsulation)
        void setFirstName(const std::string &firstName){
            first_name = firstName;
        }; 
        void setLastName(const std::string &lastName){
            last_name = lastName;
        }; 
        void setNickName(const std::string &nickName){
            nick_name = nickName;
        };
        void setDarkestSecret(const std::string &darkestSecret){
            darkest_secret = darkestSecret;
        };
        void setPhoneNumber(const std::string &phoneNumber){
            phone_number = phoneNumber;
        };

        //getter(Encapsulation)
        std::string getFirstName(){
            return first_name;
        }; 
        std::string getLastName(){
            return last_name;
        }; 
        std::string getNickName(){
            return nick_name;
        };
        std::string getDarkestSecret(){
            return darkest_secret; 
        };
        std::string getPhoneNumber(){
            return phone_number;
        };

};

class PhoneBook {
    private: 
        Contact contacts[8];
        int contactCount;
    
    public:
        PhoneBook(): contactCount(0) {}
        void ADD(){
            // Set ContactCount to oldest if Phonebook is full 
            if (contactCount >= 8)
            {
                std::cout << YELLOW << "Phonebook full. Overwriting oldest contact." << RESET << "\n";
                contactCount = 0;
            }
            Contact c; 
            std::string input; 
            
            std::cout << BOLD << BLUE << "\n=== Adding New Contact ===" << RESET << "\n";
            
            //set Values
            std::cout << CYAN << "First Name: " << RESET;
            std::getline(std::cin, input); 
            c.setFirstName(input); 

            std::cout << CYAN << "Last Name: " << RESET;
            std::getline(std::cin, input); 
            c.setLastName(input);

            std::cout << CYAN << "Nickname: " << RESET;
            std::getline(std::cin, input);
            c.setNickName(input); 

            std::cout << CYAN << "Darkest Secret: " << RESET;
            std::getline(std::cin, input);
            c.setDarkestSecret(input);

            std::cout << CYAN << "Phone Number: " << RESET;
            std::getline(std::cin, input); 
            c.setPhoneNumber(input);
            
            //fill Contacts with c
            contacts[contactCount++] = c; 
            std::cout << GREEN << "Contact successfully added!" << RESET << "\n\n";
        }
        void SEARCH(){

            // return if no Contacts
            if (contactCount == 0) {
            std::cout << YELLOW << "No contacts stored yet." << RESET << "\n";
            return;
            }
            
            std::cout << BOLD << BLUE << "\n=== Contact List ===" << RESET << "\n";
            
            // set width for correct display 
            std::cout << BOLD << std::setw(10) << "Index" << "|"
                      << std::setw(10) << "First Name" << "|"
                    << std::setw(10) << "Last Name" << "|"
                    << std::setw(10) << "Nickname" << RESET << "\n";

            // print view of cantacts and truncate 
            for (int i = 0; i < contactCount; i++) {
                 std::cout << std::setw(10) << i << "|"
                           << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                           << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                           << std::setw(10) << truncate(contacts[i].getNickName()) << "\n";
            }
            
            // throwing error if Invalid number
            std::string line;
            std::cout << CYAN << "\nType in index of contact: " << RESET;
            std::getline(std::cin, line);
            
            int index;
            
            try{
                std::stringstream ss(line);
                ss >> index; 
            }catch(...){
                std::cout << RED << "Invalid Number. Try a valid number 0-7" << RESET << "\n";
                return; 
            }
            
            if (index < 0 || index >= contactCount)
            {
                std::cout << RED << "Error: Invalid Index." << RESET << "\n"; 
                return; 
            }
            
            // print Contact
            std::cout << BOLD << BLUE << "\n=== Contact Details ===" << RESET << "\n";
            std::cout << CYAN << "First name: " << RESET << contacts[index].getFirstName() << "\n";
            std::cout << CYAN << "Last name: " << RESET << contacts[index].getLastName() << "\n";
            std::cout << CYAN << "Nickname: " << RESET << contacts[index].getNickName() << "\n";
            std::cout << CYAN << "Phone number: " << RESET << contacts[index].getPhoneNumber() << "\n";
            std::cout << CYAN << "Darkest secret: " << RESET << contacts[index].getDarkestSecret() << "\n\n";
            
        }
        void EXIT(){
            std::cout << YELLOW << "Exiting Phonebook." << RESET << "\n"; 
            exit(1); 
        }
    private: 
        // truncate to max 10 characters
        static std::string truncate(const std::string &str){
            if (str.length() > 10)
                return str.substr(0,9) + "."; 
            return str; 
            
        }
};
