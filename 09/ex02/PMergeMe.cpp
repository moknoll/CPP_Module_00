/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:51:52 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/08 11:21:48 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"
#include <iostream> 
#include <exception>
#include <cstdlib>

PMergeMe::PMergeMe() {}

PMergeMe::PMergeMe(const PMergeMe &other) : vecContainer(other.vecContainer), listContainer(other.listContainer){}

PMergeMe &PMergeMe::operator=(const PMergeMe &other)
{
	if (this != &other)
	{
		vecContainer = other.vecContainer;
		listContainer = other.listContainer;
	}
	return *this;
}

PMergeMe::~PMergeMe() {}


// fills both containers with the same integers from argv
void PMergeMe::fillContainers(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		int num = std::atoi(argv[i]);
		vecContainer.push_back(num);
		listContainer.push_back(num);
	}
}

void PMergeMe::printBeforeSort()
{
	std::cout << "Before: ";
	if (vecContainer.size() > 5)
	{
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << vecContainer[i] << " ";
		}
		std::cout << "[...]";	
	}
	else
	{
	for (size_t i = 0; i < vecContainer.size(); i++)
		{
			std::cout << vecContainer[i] << " ";
		}
	}
	std::cout << std::endl;
}

void PMergeMe::sortAndPrint()
{
	// Sorting logic to be implemented


	// Show Performance comparison between vector and list sorting
	std::cout << "Time to process a range of " << vecContainer.size() << " elements with std::vector : " << vecTime.count() << std::endl;
	std::cout << "Time to process a range of " << listContainer.size() << " elements with std::list : " << listTime.count() << std::endl;
}

int check_args(int argc, char *argv[])
{
	// Check for minimum number of arguments
	if(argc < 2)
		throw std::runtime_error("Not enough arguments");
	else if(argc >= 2)
	{
		// Check each argument for validity
		for (int i = 1; i < argc;i++)
		{
			std::string arg = argv[i];
			for (size_t j = 0; j < arg.length(); j++)
			{
				if (!isdigit(arg[j]))
				{
					throw std::runtime_error("Only positive numbers");
				}
				else if(atoi(argv[i]) < 0)
				{
					throw std::runtime_error("Only positive numbers");
				}
			}	
		}
	}
	return 1;
}