/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:53:20 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/17 14:09:15 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	private: 
	std::string ideas[100];
	
	public:
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain &operator=(const Brain &obj);

};


#endif