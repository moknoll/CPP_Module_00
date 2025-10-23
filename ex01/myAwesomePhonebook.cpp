/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:10:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/23 11:45:12 by mknoll           ###   ########.fr       */
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
