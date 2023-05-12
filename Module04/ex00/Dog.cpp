/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:41:33 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 18:39:18 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):__type("Dog"){
	std::cout << "Dog construct." << std::endl;
}

Dog::Dog (std::string name){
	std::cout << "Dog " << name << " construct." << std::endl;
}

Dog::~Dog( void ){
	std::cout << "Dog deconstruct." << std::endl;
}

std::string Dog::getType( void ) const {
	return (this->__type);
}

void Dog::makeSound( void ) const {
	std::cout << "Woof Woof." << std::endl;
}