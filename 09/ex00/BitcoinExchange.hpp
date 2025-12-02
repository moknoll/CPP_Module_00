/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:26:39 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/02 13:05:50 by mknoll           ###   ########.fr       */
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
		// Constructor & Destructor
		DatesAndPrices();
		DatesAndPrices(std::string database);
		DatesAndPrices(const DatesAndPrices &obj);
		DatesAndPrices &operator=(const DatesAndPrices &obj);
		~DatesAndPrices(); 

		// Methods
		double priceForDate(const std::string& date) const;  // ✅ Proper signature
		void loadDatabase(const std::string& filename);      // ✅ New method
		void printFees(const std::string &filename);
	 
};

#endif