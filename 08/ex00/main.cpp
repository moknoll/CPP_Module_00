/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:41:59 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/27 12:36:47 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <exception>


int main()
{
    std::vector<int> v;
    for (int i = 1; i < 5; i++)
    {
        v.push_back(i); 
    }
    std::cout << "=== Test Vector ===" << std::endl; 
    try
    {
        std::cout << "Searching for 3 in vector" << std::endl;
        easyfind(v, 3);
        std::cout << "Found 3 in v " << std::endl;   
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "Searching for 7 in vector" << std::endl;
         easyfind(v, 7);      
    }
    catch(std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "\n=== Test List ===" << std::endl; 
    std::list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    try {
        std::cout << "Searching for 20 in list..." << std::endl;
        easyfind(l, 20);
        std::cout << "Found 20!" << std::endl;
    } 
    catch(std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try {
        std::cout << "Searching for 50 in list..." << std::endl;
        easyfind(l, 50);
        std::cout << "Found 50!" << std::endl;
    } 
    catch(std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0; 
}