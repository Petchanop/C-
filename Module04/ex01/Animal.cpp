/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:20:49 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 20:21:13 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ):_brain(new Brain()), __type("Animal"){}

Animal::~Animal( void ){
	delete _brain;
}

Animal::Animal(Animal const & copy){
	this->__type = *(new std::string(copy.getType()));
	this->_brain = new Brain(*copy.getBrain());
}

Animal & Animal::operator = (Animal const & rhs){
	Animal *lhs = new Animal(rhs);
	return (*lhs);
}

std::string Animal::getType( void ) const {
	return (this->__type);
}

void Animal::makeSound( void ) const {
	std::cout << "GeeeZZZZZz." << std::endl;
}

Brain * Animal::getBrain( void ) const{
	return (this->_brain);
}