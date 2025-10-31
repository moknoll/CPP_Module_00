/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:39:06 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/30 10:50:50 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string> 


class Rectangle{
	private: 
		double length;
		double width;

		double area(){
			return length *width;
		}
	public:
		void set_dimension(double w, double l){
			width = w;
			length = l;
		}

		void print_area();
		
		double perimiter();
};

double Rectangle::perimiter(){
	return 2 * (length + width);
}

void Rectangle::print_area(){
	std:: cout << area() << std::endl;
}


int main()
{
	Rectangle r;

	r.set_dimension(2, 2);
	r.print_area();

	std:: cout << r.perimiter() << std::endl;
}