/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:32:49 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/22 11:38:01 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cstdlib>

ScalarConverter::ScalarConverter()
{
    // std::cout << "Default Constructor called" << std::endl; 
    return ; 
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "Constructor called for Scalar Converter" << std::endl; 
    return ; 
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    //std::cout << "Copy Constructor called for ScalarConverter" << std::endl; 
    (void)obj; 
    return ; 
}

ScalarConverter &ScalarConverter:: operator=(const ScalarConverter &obj)
{
    std::cout << "Copy assignment constructor called for Scalar Converter" << std::endl; 

    if (this != &obj)
    {
        (void)obj; 
    }
    return *this; 
}

void ScalarConverter::convert(std::string const &literal)
{

    
}

bool ScalarConverter::isChar(const std::string &literal)
{
    if (literal.length() == 1 && !isdigit(literal[0]))
        return true;
    else 
        return false;
}
bool ScalarConverter::isInt(const std::string &literal)
{
    if(literal.length() == 0)
        return false;
    for(int i = 0; i < literal.length(); i++)
    {
        if(!isdigit(literal[i]))
            return false; 
        else
            return true; 
    }
}
bool ScalarConverter::isFloat(const std::string &literal)
{
    int hasDot = 0; 
}
bool ScalarConverter::isDouble(const std::string &literal)
{
    
}