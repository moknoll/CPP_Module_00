/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:57:45 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 13:33:19 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("unknown")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria parametrized constructor called for type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &obj) : type(obj.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << "AMateria assignment operator called" << std::endl;
	if (this != &obj)
	{
		// Note: In many implementations, type might be immutable after construction
		// But we'll allow it to be changed for this exercise
		this->type = obj.type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called for type: " << type << std::endl;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: using unknown materia on " << target.getName() << std::endl;
}