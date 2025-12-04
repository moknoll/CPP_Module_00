/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:26:23 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/04 10:43:43 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "RPN.hpp"
#include "exception"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "ERROR: only two arguments allowed!" << std::endl;
		return 1;
	}
	try
	{
		RPN rpn(argv[1]);
		rpn.calculation();	
	}
	catch(std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	
}