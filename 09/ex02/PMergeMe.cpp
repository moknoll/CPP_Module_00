/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:51:52 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/08 15:09:13 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"
#include <iostream> 
#include <exception>
#include <cstdlib>
#include <sys/time.h>
#include <algorithm>
#include <unistd.h> //for sleep function
#include <climits>

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

// Ford-Johnson sort for std::vector
void fordJohnsonSortVector(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

}

// Ford-Johnson sort for std::list
void fordJohnsonSortList(std::list<int> &lst)
{
	if (lst.size() <= 1)
		return;
}
void PMergeMe::sortAndPrint()
{
	long long vecStart, vecEnd;
	long long listStart, listEnd;
	// Sort and time std::vector
	vecStart = get_time_ms();
	fordJohnsonSortVector(vecContainer);
	vecEnd = get_time_ms();

	listStart = get_time_ms();
	fordJohnsonSortList(listContainer);
	listEnd = get_time_ms();
	
	// Show Performance comparison between vector and list sorting
	std::cout << "Time to process a range of " 
			  << vecContainer.size() << " elements with std::vector : " 
			  << (vecEnd - vecStart) << " ms" << std::endl;
	std::cout << "Time to process a range of " << listContainer.size() 
			  << " elements with std::list : " << (listEnd - listStart) << " ms" << std::endl;
}


//helper functions
int check_args(int argc, char *argv[])
{
	// Check for minimum number of arguments
	if(argc <= 2)
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
					throw std::runtime_error("Argument is not valid");
				}
				else if(atoi(argv[i]) < 0 || atoi(argv[i]) > INT_MAX)
				{
					throw std::runtime_error("Not a valid positive integer");
				}
			}	
		}
	}
	return 1;
}

// Get current time in milliseconds since epoch
long long get_time_ms()
{
	struct timeval time;
	gettimeofday(&time, NULL);
	// from microseconds to milliseconds
	return (time.tv_sec * 1000) + (time.tv_usec / 1000); ;
}