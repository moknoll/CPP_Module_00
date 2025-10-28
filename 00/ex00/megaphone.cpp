/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:50:28 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/21 11:24:01 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>


int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::string message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std:: cout << message << '\n';
        return (0); 
    }
    for(int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        for(std:: size_t j = 0; j < arg.length(); j++)
        {
            char c = arg[j]; 
            if (isalpha(static_cast<unsigned char>(c)))
            {
                c = std::toupper(static_cast<unsigned char>(c));
                std::cout<<c;  
            }
            else
                std::cout<<c;
        }
    }
    std:: cout << '\n';
    return (0); 
}