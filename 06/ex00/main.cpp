/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:36:33 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/21 10:38:27 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (std::cerr << "Only one parameter as input" << std::endl, 1); 
    ScalarConverter::convert(argv[1]); 
    return 0; 
}