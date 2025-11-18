/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:57:47 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 13:35:13 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string> 

class ICharacter;

class AMateria
{
	protected:
	std::string type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif