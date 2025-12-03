/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:25:01 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/29 12:42:35 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) : std::stack<T>(obj){};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj) 
{
	if (this != obj)
		std::stack<T>::operator=(obj);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}


// std::stack<T> has a protected member variable called c.
// c stores the actual elements inside the stack.
// c is of type std::deque<T> by default,
// it could be std::vector<T> or std::list<T>.
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

// it just takes the container c (deque) and returns begin -> so it just uses the .end() method of deque 
template <typename T>
typename MutantStack<T>:: const_iterator MutantStack<T>:: begin() const 
{ 
	return (this->c.begin()); 
}

//
template <typename T>
typename MutantStack<T>:: const_iterator MutantStack<T>:: end() const
{ 
	return (this->c.end()); 
}
