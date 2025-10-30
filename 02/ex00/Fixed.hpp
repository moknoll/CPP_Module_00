/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:48:27 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 14:59:47 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string> 

class Fixed{
	private: 
		int value;
		static const int fractBits = 8;

	public:
		// Default Constructor
		Fixed();
		
		// Copy Constructor ()
		Fixed(const Fixed &obj);
		
		// A copy assignment operator overload
		Fixed &operator=(const Fixed &obj);

		// Deconstructor
		~Fixed();

		// getter
		int getRawBits ( void );

		// setter
		void setRawBits ( int const raw);
};


#endif 