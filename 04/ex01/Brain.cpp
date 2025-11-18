/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:48:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 12:36:48 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// std:: cout << "Constructor called for Brain" << std::endl;
	return ;
}

Brain::~Brain()
{
	std:: cout << "Destructor called for Brain" << std::endl;
	return ; 
}

Brain::Brain( const Brain&obj)
{
	// std:: cout << "Copy constructor called for Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	return ;
}	

Brain &Brain:: operator=(const Brain &obj)
{
	// std::cout << "Brain copy assignment constructor called" << std::endl;
	if(this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}