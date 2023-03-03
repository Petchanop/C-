/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:32:11 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 00:50:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ){}

HumanB::HumanB( std::string name){
	this->_name = name;
}

HumanB::~HumanB( void ){}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void	HumanB::attack( void ){
	std::cout << this->_name << " " << "attacks with their" << " " << this->weapon->getType() << std::endl;
}
