/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:26:39 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/02 12:59:38 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP
#include <string>
#include <iostream>
#include <map> 

class DatesAndPrices 
{
	private: 
		std::map<std::string, double> fees;
		
	public:
		DatesAndPrices();
		DatesAndPrices(std::string database);
		DatesAndPrices(const DatesAndPrices &obj);
		DatesAndPrices &operator=(const DatesAndPrices &obj);
		~DatesAndPrices(); 

		// Returns a price on a given date 
		int priceForDate(); 

		// The key function is printFees, which processes a file containing dates and values.
		// It attempts to print the fees for an amount of currency on a given date. 
		// If the request is invalid, it prints a descriptive error. 
		//Errors can include out-of-range values or invalid dates
		void printFees(const std::string &filename);
	 
};

#endif