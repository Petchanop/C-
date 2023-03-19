/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:44:30 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/19 18:31:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {
	private:
		std::string _type;
	public:
		Cure( void );
		Cure( std::string const & type);
		Cure( Cure const & copy);
		~Cure( void );
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif