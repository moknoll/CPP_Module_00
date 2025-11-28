/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:41:37 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/28 15:33:34 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>

class Span
{
    private: 
    unsigned int        _N;
    std::vector<int>    _numbers; 
    
    public: 
    Span(); 
    Span(unsigned int N); 
    Span(const Span &obj);
    Span &operator=(const Span &obj);  
    ~Span(); 

    void addNumber(int number);
    unsigned int shortestSpan() const; 
    unsigned int longestSpan() const; 
    void printNumbers() const;
};

#endif