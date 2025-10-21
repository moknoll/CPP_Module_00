/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:10:59 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/10/21 12:31:17 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.hpp"

int main(int argc, char *argv[])
{
    if (argv[1] == "ADD")
    {
        
    }
    else if (argv[1] == "EXIT")
    {
        PhoneBook.EXIT();
    }
    else if (argv[1] == "SEARCH")
    {
        
    }
    else
        return (std::cout << "Not applicable", 0);
    return (0); 
}
