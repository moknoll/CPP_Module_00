/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:25:02 by mknoll            #+#    #+#             */
/*   Updated: 2025/11/18 13:25:04 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(Ice const & src);
    Ice & operator=(Ice const & rhs);
    virtual ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    virtual void use(ICharacter& target);
};

#endif
