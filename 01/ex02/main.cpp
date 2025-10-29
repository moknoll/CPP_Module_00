/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:11:38 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 15:21:39 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;

	std::string &stringREF = brain;

	std::cout << "Memory Address of Initialized String: " << &brain << std::endl;
	std::cout << "Memory Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of Uninitialized String: " << brain << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;

}