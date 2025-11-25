/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:32:49 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/25 11:53:52 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


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
   if(isSpecialCase(literal))
   {
        printSpecialCases(literal);
        return; 
   }
   else if (isChar(literal))
   {
		char c = literal[0]; 
		std::cout << "char: '" << c << "'" << std::endl; 
		std::cout << "int '" << static_cast <int>(c) << "'" << std::endl;
		std::cout << "float '" << static_cast <float>(c) << ".0f" << "'" << std::endl;
		std::cout << "double '" << static_cast <double>(c) << ".0" << "'" << std::endl;

   }
   else if(isInt(literal))
   {
		long long l = atoll(literal.c_str()); 
		if(l < INT_MIN || l > INT_MAX)
			std::cout << "int: impossible(overflow)" << std::endl; 
		else
		{
			std::cout << "char: '" << static_cast<char>(l) << "'" << std::endl;
			std::cout << "int: '" << static_cast <int>(l) << "'" << std::endl;
			std::cout << "float: '" << static_cast <float>(l) << ".0f'"  << std::endl;
			std::cout << "double: '" << static_cast <double>(l) << ".0'" <<  std::endl;
		}
   }
   else if(isFloat(literal))
   {
		float f = atof(literal.c_str()); 
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: '" << static_cast <int>(f) << "'" << std::endl;
		std::cout << "float: '" << f << "f'" ; 
		std::cout << "double: '" << static_cast <float>(f) << ".0" << "'" << std::endl;
		
   }
   else if(isDouble(literal))
   {
		double d = atof(literal.c_str()); 
		std::cout << "char: '" << static_cast<char>(d) << std::endl;
		std::cout << "int: '" << static_cast <int>(d) << std::endl;
		std::cout << "float: '" << static_cast <float>(d) << ".0f'" << std::endl;
		std::cout << "double: " << d << "'" <<  std::endl; 
   }
   else
   {
		std::cout << "char: impossible" << std::endl;
    	std::cout << "int: impossible" << std::endl;
    	std::cout << "float: impossible" << std::endl;
    	std::cout << "double: impossible" << std::endl;
   }
}

bool ScalarConverter::isSpecialCase(const std::string &literal)
{
    return (literal == "nan" || literal == "nanf" ||
            literal == "+inf" || literal == "+inff" ||
            literal == "-inf" || literal == "-inff" ||
            literal == "inf" || literal == "inff"); 
}

// is char 
bool ScalarConverter::isChar(const std::string &literal)
{
    if (literal.length() == 1)
        return true;
    else 
        return false;
}

void ScalarConverter::printSpecialCases(const std::string &literal)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}

//is int
bool ScalarConverter::isInt(const std::string &literal)
{
    size_t i = 0; 
    
    if(literal.length() == 0)
        return false;
    if(literal[0] == '+' || literal[0] == '-')
    {
        if(literal.length() == 1)
            return false;
        i = 1; 
    }
    for(; i < literal.length(); i++)
    {
        if(!isdigit(literal[i]))
            return false; 
    }
    return true; 
}

bool ScalarConverter::isFloat(const std::string &literal)
{
    bool hasDecimal = false; 
    if(literal.empty() || literal[literal.length() - 1] != 'f')
        return false; 

    for (size_t i = 0; i < literal.length()-1; i++)
    {
        if(literal[i] == '+' || literal[i] == '-')
            i++;
        if(literal[i] == '.')
        {
            if(hasDecimal)
                return false;
            hasDecimal = true; 
        }
        else if(!std::isdigit(literal[i]))
            return false;          
    }
    return (hasDecimal && literal[literal.length() -1 ] == 'f'); 
}

bool ScalarConverter::isDouble(const std::string &literal)
{
    if (literal.empty())
        return false;

    size_t i = 0;
    bool hasDecimal = false;
    if (literal[0] == '+' || literal[0] == '-')
    {
        if (literal.length() == 1) return false;
        i = 1;
    }
    for (; i < literal.length(); i++)
    {
        if (literal[i] == '.')
        {
            if (hasDecimal) 
                return false;
            hasDecimal = true;
        }
        else if (!std::isdigit(literal[i]))
            return false;
    }
    return hasDecimal;
}