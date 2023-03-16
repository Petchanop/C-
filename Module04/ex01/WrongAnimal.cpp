/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:09:12 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/13 17:14:15 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):__type("WrongAnimal"){}

WrongAnimal::~WrongAnimal( void ){}

std::string WrongAnimal::getType( void ){
	return (this->__type);
}

void WrongAnimal::makeSound( void ){
	std::cout << "I'm WrongAnimal." << std::endl;
}