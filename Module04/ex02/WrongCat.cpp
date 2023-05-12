/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:14:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/13 17:19:20 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ):__type("Wrong Cat"){};

WrongCat::~WrongCat( void ){}

std::string WrongCat::getType( void ){
	return (this->__type);
}

void WrongCat::makeSound( void ){
	std::cout << "I'm a WrongCat." << std::endl;
}