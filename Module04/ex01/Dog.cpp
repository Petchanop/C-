/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:41:33 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 20:22:12 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):Animal(),_brain(new Brain()),__type("Dog"){}

Dog::Dog(Animal const & copy):Animal(copy){}

Dog::~Dog( void ){
	delete _brain;
}

Dog & Dog::operator = (Dog const & rhs){
	__type = rhs.getType();
	_brain = rhs.getBrain();
	return (*this);
} 

std::string Dog::getType( void ) const {
	return (this->__type);
}

void Dog::makeSound( void ) const {
	std::cout << "Woof Woof." << std::endl;
}