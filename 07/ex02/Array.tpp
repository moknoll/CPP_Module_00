/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:45:39 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/25 14:52:55 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0){};

//Creates array of size n
template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n)
{
	std::cout << "construcotr called with size" << n << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &obj) :_data(NULL), _size(0)
{
	std::cout << "Copy consructor called" << std::endl;
	
	*this = obj;	
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	std::cout << "Copy assignement construcor caleled" << std::endl;
	if(this != &obj)
	{
		// delete old data
		delete[] _data;
		
		// copy size
		_size = obj._size;
		
		// allocate new memory
		if(_size > 0)
		{
			_data = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = obj._data[i];
		}
		else 
			_data = NULL;
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	std:: cout << "Destructor called" << std::endl;
	delete[] _data;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}