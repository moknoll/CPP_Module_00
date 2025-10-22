/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:10:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/22 10:40:59 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.hpp"

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
            myphonebook.ADD();
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
