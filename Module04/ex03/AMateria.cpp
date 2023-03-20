/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:51:19 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 17:33:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ){}

AMateria::AMateria(std::string const & type):_type(type){}

AMateria::~AMateria( void ){}

std::string const & AMateria::getType( void ) const{
	return (this->_type);
}