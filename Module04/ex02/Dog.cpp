/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:41:33 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 20:03:26 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):Animal(),_brain(new Brain()),__type("Dog"){
	std::cout << "Dog construct." << std::endl;
}

Dog::Dog(Dog const & copy):Animal(copy),_brain(new Brain(*copy._brain)),__type("Dog"){
	std::cout << "Dog copy construct." << std::endl;
}

Dog::~Dog( void ){
	delete _brain;
	std::cout << "Dog deconstruct." << std::endl;
}

Dog & Dog::operator = (Dog const & rhs){
	this->__type = rhs.getType();
	this->_brain = rhs.getBrain();
	for (int i = 0; rhs.getBrain()->getIdea()[i].empty(); i++){
		this->_brain->setIdea(rhs.getBrain()->getIdea()[i]);
	}
	std::cout << "Dog operator = is call." << std::endl;
	return (*this);
} 

std::string Dog::getType( void ) const {
	return (this->__type);
}

void Dog::makeSound( void ) const {
	std::cout << "Woof Woof." << std::endl;
}

Brain * Dog::getBrain( void ) const{
	return (this->_brain);
}