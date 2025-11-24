/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:32:50 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 11:01:27 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALRAR_CONVERT_HPP 
#define SCALRAR_CONVERT_HPP
#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <sstream> 


class ScalarConverter
{
    private:
        // Private constructor - cannot be instantiated
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
        
        // Helper functions
        static bool isChar(const std::string &literal);
        static bool isInt(const std::string &literal);
        static bool isFloat(const std::string &literal);
        static bool isDouble(const std::string &literal);
        static bool isSpecialCase(const std::string &literal); 
        static void printSpecialCases(const std::string &literal); 
        
        
    public: 
        static void convert(std::string const &literal);
};


#endif