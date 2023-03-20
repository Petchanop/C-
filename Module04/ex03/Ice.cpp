/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:48:08 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 17:34:08 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ):AMateria("Ice"),_type("Ice"){
	std::cout << "Ice Materia has been create." << std::endl;
}

Ice::Ice( std::string const & type):_type(type){}

Ice::Ice(Ice const &copy){
	*this = copy;
}

Ice::~Ice( void ){}

Ice * Ice::clone( void ) const{
	return (new Ice(*this));
}

void Ice::use( ICharacter & target){
	std::cout << " shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
