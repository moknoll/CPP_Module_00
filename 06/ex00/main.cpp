/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:36:33 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 11:01:30 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (std::cout << "Only one parameter as input" << std::endl, 1); 
    ScalarConverter::convert(argv[1]); 
    return 0; 
}