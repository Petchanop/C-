/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:28:22 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 20:22:40 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):__type("Cat"){
	this->_brain = new Brain();
}

Cat::Cat(Animal const & copy):Animal(copy){}	

const Animal & Cat::operator = (Animal const & rhs){
	Animal *newCat = new Cat(rhs);
	return (*newCat);
}

Cat::~Cat( void ){
	delete _brain;
}

std::string Cat::getType( void ) const {
	return (this->__type);
}

void Cat::makeSound( void ) const {
	std::cout << "Meow Meow." << std::endl;
}

