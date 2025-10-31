/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:10:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/30 16:35:47 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.hpp"

// Contact method definitions 
void Contact::setFirstName(const std::string &firstName){first_name = firstName; }
void Contact::setLastName(const std::string &lastName) { last_name = lastName; }
void Contact::setNickName(const std::string &nickName) { nick_name = nickName; }
void Contact::setDarkestSecret(const std::string &darkestSecret) { darkest_secret = darkestSecret; }
void Contact::setPhoneNumber(const std::string &phoneNumber) { phone_number = phoneNumber; }

std::string Contact::getFirstName() { return first_name; }
std::string Contact::getLastName() { return last_name; }
std::string Contact::getNickName() { return nick_name; }
std::string Contact::getDarkestSecret() { return darkest_secret; }
std::string Contact::getPhoneNumber() { return phone_number; }

// PhoneBook method definitions
PhoneBook::PhoneBook(): contactCount(0) {}

void PhoneBook::ADD(){
    // Set ContactCount to oldest if Phonebook is full 
    if (contactCount >= 8)
    {
        std::cout << YELLOW << "Phonebook full. Overwriting oldest contact." << RESET << "\n";
        contactCount = 0;
    }
    Contact c; 
    std::string input; 
    
    std::cout << BOLD << BLUE << "\nAdding New Contact " << RESET << "\n";
    
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

void PhoneBook::SEARCH(){

    // return if no Contacts
    if (contactCount == 0) {
        std::cout << YELLOW << "No contacts stored yet." << RESET << "\n";
        return;
    }
    
    std::cout << BOLD << BLUE << "\nContact List" << RESET << "\n";
    
    // set width for correct display 
    std::cout << BOLD << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << RESET << "\n";

    // print view of contacts and truncate 
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

void PhoneBook::EXIT(){
    std::cout << YELLOW << "Exiting Phonebook." << RESET << "\n"; 
    exit(1); 
}

// truncate to max 10 characters
std::string PhoneBook::truncate(const std::string &str){
    if (str.length() > 10)
        return str.substr(0,9) + "."; 
    return str; 
}

int main() {
    PhoneBook myphonebook;
    std::string command;
    
    std::cout << "\n\n";
    std::cout << BOLD << MAGENTA << "     Welcome to my Phonebook!    " << RESET << "\n";
    std::cout << "\n\n";
    std::cout << CYAN << "Available commands: " << YELLOW << "ADD" << RESET << ", " 
              << YELLOW << "SEARCH" << RESET << ", " << YELLOW << "EXIT" << RESET << "\n\n";

    while (true) {
        std::cout << BLUE << "Enter command: " << RESET;
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            while (true)
            {
                std::string command2;
                myphonebook.ADD();
                std::cout << CYAN << "Type 'EXIT' to quit adding contacts or press ENTER to add another contact: \n" << RESET;
                if (std::getline(std::cin, command2))
                {
                    if (command2 == "EXIT")
                        break;
                }
            }
        }
        else if (command == "SEARCH")
            myphonebook.SEARCH();
        else if (command == "EXIT") {
            myphonebook.EXIT(); 
            break;
        } else
            std::cout << RED << "Whoops! Please use ADD, SEARCH, or EXIT." << RESET << "\n\n";
    }

    return 0;
}
