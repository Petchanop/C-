/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:28:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 18:56:28 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):_type("WrongAnimal"){
	std::cout << "Wrong Animal construct." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ):_type(type){
	std::cout << "Wrong Animal " << type << " construct." << std::endl;	
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "Wrong Animal deconstruct." << std::endl;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & rhs){
	*this = rhs;
	return (*this);
}

std::string WrongAnimal::getType( void ) const{
	return (this->_type);
}

void WrongAnimal::makeSound( void )const {
	std::cout << "Wrong Wrong Animal." << std::endl;
}


