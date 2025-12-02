/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:26:36 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/02 12:43:35 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

DatesAndPrices::DatesAndPrices() : fees(){};

DatesAndPrices::DatesAndPrices(std::string database) {};

DatesAndPrices::DatesAndPrices(const DatesAndPrices &obj) : fees(obj.m) {};

DatesAndPrices &DatesAndPrices:: operator=(const DatesAndPrices&obj)
{
	if(this != &obj)
	{
		this->m = obj.m;
	}
	return *this;
}

DatesAndPrices::~DatesAndPrices() {};

int DatesAndPrices::priceForDate();


void DatesAndPrices::printFees(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Could not open file!");

    std::string line;
    while (std::getline(file, line))
    {
        if (line.empty())
            continue;

        std::stringstream ss(line);
        std::string date;
        std::string valueStr;

        if (!std::getline(ss, date, ',')) continue;
        if (!std::getline(ss, valueStr)) continue;

        double value = std::atof(valueStr.c_str());

        fees.insert(std::make_pair(date, value));
    }

    // Testausgabe
    std::map<std::string, double>::iterator it;
    for (it = fees.begin(); it != fees.end(); ++it)
        std::cout << it->first << " => " << it->second << std::endl;
}
