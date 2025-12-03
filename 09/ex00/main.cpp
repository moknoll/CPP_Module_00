/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:26:32 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/03 10:40:12 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main ()
{
    try 
    {
        std::cout << "Bitcoin exchange fees:" << std::endl; 
        DatesAndPrices bitcoin("data.csv"); // load datebase 
        bitcoin.printFees("input.txt");
    } 
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}