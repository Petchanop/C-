/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:45:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 18:49:35 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void):_type("WrongCat"){
	std::cout << "WrongCat construct." << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat deconstuct." << std::endl;
}

std::string WrongCat::getType( void ) const {
	return (this->_type);
}

void	WrongCat::makeSound( void ) const{
	std::cout << "Meow Meow WrongCat." << std::endl;
}