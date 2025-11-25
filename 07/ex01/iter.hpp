/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:57:45 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 13:30:24 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

// Generic iter template
template <typename T>
void iter(T* arr, size_t len, void (*f)(T&)) 
{
    for (size_t i = 0; i < len; ++i)
        f(arr[i]);
}

// Template functions
template <typename T>
void print(T& parameter) 
{
    std::cout << parameter << " ";
}
template <typename T>
void increment(T& parameter) 
{
    parameter += 1;
}

#endif
