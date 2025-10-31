/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:27 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/31 11:11:58 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string> 
#include <cmath>

class Fixed{
	private: 
		int value;
		static const int fractBits = 8;

	public:
		//constructors
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();	

		// getter
		int getRawBits ( void );
		// setter
		void setRawBits ( int const raw);

		//methods 
		float toFloat( void )const;
		int toInt( void )const;

		// comparision operators
		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj)const;
		bool operator<=(const Fixed &obj)const;
		bool operator==(const Fixed &obj)const;
		bool operator!=(const Fixed &obj)const;

		// arithmetic operators 
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;

		// Increment / Decrement 
		Fixed &operator++(); 
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		// overload min max (Compiler automatically calls function const)
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

//overlaod of the insertion paramter
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif 