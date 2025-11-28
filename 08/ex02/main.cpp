/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:47:11 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/28 13:06:33 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <queue>

int main()
{
    std::cout << "=== MutantStack Test ===" << std::endl;
    
    MutantStack<int> mstack;
    
    // Test: Push operations
    std::cout << "\n--- Push Operations ---" << std::endl;
    mstack.push(5);
    std::cout << "Pushed: 5" << std::endl;
    mstack.push(17);
    std::cout << "Pushed: 17" << std::endl;
    
    // Test: Top element
    std::cout << "\n--- Stack Operations ---" << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    
    mstack.pop();
    std::cout << "Popped top element" << std::endl;
    std::cout << "Current size: " << mstack.size() << std::endl;
    
    // Print current stack content
    std::cout << "\n--- Current Stack Content ---" << std::endl;
    std::cout << "Stack contains: ";
    for(MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test: More push operations
    std::cout << "\n--- Adding More Elements ---" << std::endl;
    mstack.push(3);
    std::cout << "Pushed: 3" << std::endl;
    mstack.push(5);
    std::cout << "Pushed: 5" << std::endl;
    mstack.push(737);
    std::cout << "Pushed: 737" << std::endl;
    mstack.push(0);
    std::cout << "Pushed: 0" << std::endl;
    
    // Print final stack content
    std::cout << "\n--- Final Stack Content ---" << std::endl;
    std::cout << "Stack contains: ";
    for(MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Total elements: " << mstack.size() << std::endl;
    
    // Test: Iterator functionality
    std::cout << "\n--- Iterator Test ---" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
	std::cout << "it begin: " << *it << std::endl;
	std::cout << "ite end: " << *ite << std::endl;

	// Test: Const_iterator functionality
	std::cout << "\n ---const Iterator test---" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();
	std::cout << "cit begin: " << *cit << std::endl;
    std::cout << "cite end: " << *cite << std::endl;
    // Test: easyfind function
    std::cout << "\n--- Search Test ---" << std::endl;
    try {
        std::cout << "Searching for 3 in MutantStack..." << std::endl;
        easyfind(mstack, 3);
        std::cout << "Found 3 in MutantStack!" << std::endl;   
    }
    catch(std::exception &e) {
        std::cout << "Search failed: " << e.what() << std::endl;
    }
    
    // Test: Iterator operations
    std::cout << "\n--- Iterator Operations ---" << std::endl;
    ++it;
    std::cout << "Iterator incremented" << std::endl;
    --it;
    std::cout << "Iterator decremented" << std::endl;
    
    // Test: Print all elements
    std::cout << "\n--- All Elements (via Iterator) ---" << std::endl;
    while (it != ite) {
        std::cout << "Element: " << *it << std::endl;
        ++it;
    }
    
    // Test: Copy constructor
    std::cout << "\n--- Copy Test ---" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Created std::stack copy from MutantStack" << std::endl;
    std::cout << "Copy size: " << s.size() << std::endl;
    
    std::cout << "\n=== Test Complete ===" << std::endl;
	
    return 0;
}