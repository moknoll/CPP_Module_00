/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:47:07 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/28 13:44:02 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T> 
class MutantStack : public std::stack<T>
{
	public: 
		MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack &operator=(const MutantStack &obj);
		~MutantStack();
		
		// Creates an iterator type alias by accessing the underlying container's iterator
		// std::stack normally uses std::deque as underlying container (container_type)
		// This typedef allows us to iterate through the stack like any STL container
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		// Provide iterator access to the underlying container 'c' (protected member of std::stack)
		// This makes MutantStack iterable unlike regular std::stack
		iterator begin();
		iterator end();
		
		// Const versions for read-only iteration
		const_iterator begin() const; 
		const_iterator end() const;
};

// template <typename T> 
// int easyfind(T& container, int num)
// {
// 	// iterator through container begin to container end if finds num
// 	typename T::iterator found = std::find(container.begin(), container.end(), num);
	
// 	// if it is at te end, so didn't find num throw exception
// 	if (found == container.end())
// 		throw std::out_of_range("Number not found in container");
// 	return *found;
// }

#include "MutantStack.tpp"

#endif