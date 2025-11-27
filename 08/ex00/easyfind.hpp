/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:42:05 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/27 13:47:02 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
// #include <algorithm>
#include <exception>
#include <iostream>

template <typename T> 
typename T::iterator easyfind(T& container, int num)
{
	// iterator through container begin to container end if finds num
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	
	// if it is at te end, so didn't find num throw exception
	if (it == container.end())
		throw std::out_of_range("Number not found in container");
	return it;
}
 
#endif