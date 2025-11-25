/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:11:32 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 13:29:04 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char arrC[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "=== 1. iter Tests ===" << std::endl;
    iter(arr, 5, print);
    std::cout << std::endl;
    iter(arrC,  5, print);

    std::cout << "\n=== 2. iter increment Tests ===" << std::endl;
    iter(arr, 5, increment);
    std::cout << std::endl;
    iter(arrC,  5, increment);
    iter(arr, 5, print);
    std::cout << std::endl;
    iter(arrC,  5, print);

    return 0;
}