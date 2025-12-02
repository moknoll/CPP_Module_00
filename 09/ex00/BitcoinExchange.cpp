/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:26:36 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/02 13:01:43 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

// Default constructor - initializes empty fees map
DatesAndPrices::DatesAndPrices() : fees() 
{
    std::cout << "DatesAndPrices default constructor called" << std::endl;
}

// Constructor that loads database from file
DatesAndPrices::DatesAndPrices(std::string database) : fees()
{
    std::cout << "DatesAndPrices constructor with database: " << database << std::endl;
   // loadDatabase(database);
}

// Copy constructor
DatesAndPrices::DatesAndPrices(const DatesAndPrices &obj) : fees(obj.fees) 
{
    std::cout << "DatesAndPrices copy constructor called" << std::endl;
}

// Assignment operator
DatesAndPrices &DatesAndPrices::operator=(const DatesAndPrices &obj)
{
    std::cout << "DatesAndPrices assignment operator called" << std::endl;
    if(this != &obj)
    {
        this->fees = obj.fees;  // Copy the entire map
    }
    return *this;
}

// Destructor
DatesAndPrices::~DatesAndPrices() 
{
    std::cout << "DatesAndPrices destructor called" << std::endl;
}

// Find price for a specific date (returns closest available date)
double DatesAndPrices::priceForDate(const std::string& date) const
{
    // Try to find exact date
    std::map<std::string, double>::const_iterator it = fees.find(date);
    if (it != fees.end()) {
        return it->second;
    }
    
    // If exact date not found, find the closest earlier date
    it = fees.lower_bound(date);
    if (it != fees.begin()) {
        --it;  // Get the previous date (closest earlier date)
        return it->second;
    }
    
    // No valid date found
    throw std::runtime_error("No price data available for date: " + date);
}

// Load database from CSV file
void DatesAndPrices::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Could not open database file: " + filename);
    }
    
    std::string line;
    bool isFirstLine = true;
    
    while (std::getline(file, line)) {
        // Skip header line and empty lines
        if (line.empty() || (isFirstLine && line.find("date") != std::string::npos)) {
            isFirstLine = false;
            continue;
        }
        
        // Parse CSV line: date,price
        std::stringstream ss(line);
        std::string date;
        std::string priceStr;
        
        if (!std::getline(ss, date, ',')) continue;
        if (!std::getline(ss, priceStr)) continue;
        
        // Convert price string to double
        double price = std::atof(priceStr.c_str());
        
        // Store in map
        fees[date] = price;
    }
    
    file.close();
    std::cout << "Loaded " << fees.size() << " price entries from database" << std::endl;
}


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
