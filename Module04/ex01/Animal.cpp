/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:20:49 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:49:00 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): __type("Animal"){
	std::cout << "Animal construct." << std::endl;
}

Animal::~Animal( void ){
	std::cout << "Animal deconstruct." << std::endl;
}

Animal::Animal(Animal const & copy):__type(copy.getType()){
	std::cout << "Copy Animal." << std::endl;
}

Animal & Animal::operator = (Animal const & rhs){
	Animal *lhs = new Animal(rhs);
	std::cout << "Animal operator = is call." << std::endl;
	return (*lhs);
}

std::string Animal::getType( void ) const {
	return (this->__type);
}

void Animal::makeSound( void ) const {
	std::cout << "GeeeZZZZZz." << std::endl;
}