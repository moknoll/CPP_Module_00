/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:09 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/28 09:44:46 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOMEPHONEBOOK_HPP
#define MYAWESOMEPHONEBOOK_HPP

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
        // setters (only declarations in header)
        void setFirstName(const std::string &firstName);
        void setLastName(const std::string &lastName);
        void setNickName(const std::string &nickName);
        void setDarkestSecret(const std::string &darkestSecret);
        void setPhoneNumber(const std::string &phoneNumber);

        // getters (only declarations in header)
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getDarkestSecret();
        std::string getPhoneNumber();
};

class PhoneBook {
    private:
        Contact contacts[8];
        int contactCount;

    public:
        PhoneBook();
        void ADD();
        void SEARCH();
        void EXIT();

    private:
        // truncate to max 10 characters (declaration only)
        static std::string truncate(const std::string &str);
};

#endif // MYAWESOMEPHONEBOOK_HPP
