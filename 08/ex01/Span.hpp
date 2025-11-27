/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:41:37 by moritzknoll       #+#    #+#             */
/*   Updated: 2025/11/27 12:49:44 by moritzknoll      ###   ########.fr       */
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
    unsigned int        N;
    std::vector<int>    _numbers; 
    
    public: 
    Span(); 
    Span(unsigned int N); 
    Span(const Span &obj);
    Span &operator=(const Span &obj);  
    ~Span(); 

    void addNumber(int number);
    const unsigned int shortestSpan() const; 
    const unsigned int longestSpan() const; 
};

#endif