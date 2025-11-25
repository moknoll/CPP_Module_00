/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:15:50 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/24 11:22:44 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <string>

class Data
{
	private:
		int _id;
		std::string _name;
		double _value;

	public:
		Data();
		Data(int id, const std::string& name, double value);
		Data(const Data& other);
		~Data();
		Data& operator=(const Data& other);

		int getId() const;
		std::string getName() const;
		double getValue() const;
};

#endif