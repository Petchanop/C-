/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:28:22 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 20:02:03 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):__type("Cat"){
	this->_brain = new Brain();
	std::cout << "Cat construct." << std::endl;
}

Cat::Cat(Cat const & copy):Animal(copy),_brain(new Brain(*copy._brain)),__type("Cat"){
	std::cout << "Cat copy construtor is call." << std::endl;
}	

const Cat & Cat::operator = (Cat const & rhs){
	Cat *newCat = new Cat(rhs);
	newCat->_brain = new Brain(*rhs._brain);
	std::cout  << "Cat operator = is call." << std::endl;
	return (*newCat);
}

Cat::~Cat( void ){
	std::cout << "Cat deconstruct." << std::endl;
	delete _brain;
}

std::string Cat::getType( void ) const {
	return (this->__type);
}

void Cat::makeSound( void ) const {
	std::cout << "Meow Meow." << std::endl;
}

Brain * Cat::getBrain( void ) const {
	return (this->_brain);
}