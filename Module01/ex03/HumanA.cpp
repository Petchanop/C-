/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:15:56 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 00:50:40 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( void ){}

HumanA::~HumanA( void ){}

HumanA::HumanA( std::string name, Weapon& weapon){
	this->_name = name;
	this->weapon = &weapon;
}

void	HumanA::attack( void ){
	std::cout << this->_name << " " << "attacks with their" << " " << this->weapon->getType() << std::endl;
}