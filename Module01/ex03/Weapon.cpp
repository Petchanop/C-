/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:08:12 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 00:42:12 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon( void ){}

void	Weapon::setType(std::string type){
	this->type = type;
}

std::string	const& Weapon::getType( void ){
	return (this->type);
}