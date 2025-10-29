/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:56 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 16:28:39 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedIsForLosers.hpp"


void sedIsForLosers(std::string filename, std::string s1, std::string s2)
{
	// check for valid filename and non-empty s1 and s2
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << RED << "Invalid filename or empty search string." << RESET << std::endl;
		return;
	}

	// open file infile and outfile
	std::string outFilename = std::string(filename) + ".replace";
	std::ifstream infile(filename.c_str());
	std::ofstream outfile(outFilename.c_str());

	if(!infile.is_open() || !outfile.is_open())
	{
	 	std::cerr << RED << "Error opening file." << RESET << std::endl;
		return;
	}
	// read infile line by line
	std::string line;
	while(getline(infile, line))
	{
		size_t pos = 0;
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
 	infile.close();
 	outfile.close();
}