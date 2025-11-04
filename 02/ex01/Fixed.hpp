/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:27 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/04 09:37:37 by moritzknoll      ###   ########.fr       */
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
		// Default Constructor
		Fixed();
		// Int Constructor
		Fixed(const int n);
		// Float Constructor
		Fixed(const float f);
		// Copy Constructor ()
		Fixed(const Fixed &obj);
		// A copy assignment operator overload
		Fixed &operator=(const Fixed &obj);
		// Deconstructor
		~Fixed();	

		// getter
		int getRawBits ( void ) const ;
		// setter
		void setRawBits ( int const raw);

		//methods 
		float toFloat( void )const;
		int toInt( void )const;
};

//overlaod of the insertion paramter
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif 