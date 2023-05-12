/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:28:22 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 18:38:10 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): __type("Cat"){
	std::cout << "Cat construct." << std::endl;
}

Cat::Cat (std::string name){
	std::cout << "Cat " << name << " construct." << std::endl;
}

Cat::~Cat( void ){
	std::cout << "Cat deconstruct." << std::endl;
}

std::string Cat::getType( void ) const {
	return (this->__type);
}

void Cat::makeSound( void ) const {
	std::cout << "Meow Meow." << std::endl;
}

