/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:40:02 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 14:38:12 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
	T* _data;
	unsigned _size;
	
	public: 
	Array();
	Array(unsigned int n);
	Array(const Array <T>&obj);
	Array<T> &operator=(const Array<T> &obj);
	~Array();

	unsigned int size() const;

	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
};

#include "Array.tpp"

#endif