/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:55:46 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 12:08:21 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc,char *argv[])
{
	Harl h;
	std::string input;
	
	if (argc != 2)
	{
		std:: cerr << "Only two arguments" << std::endl;
		return 1;
	}
	input = argv[1];
	h.complain(input);
	return (0);
}