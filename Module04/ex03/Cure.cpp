/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:32:36 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 14:55:41 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ):AMateria("Cure"),_type("Cure"){
	std::cout << "Cure Materia has been create." << std::endl;
}

Cure::Cure( std::string const & type):_type(type){}

Cure::Cure(Cure const &copy){
	*this = copy;
}

Cure::~Cure( void ){}

Cure* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter & target){
	std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}