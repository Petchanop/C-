/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:50:03 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 23:19:57 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ):ClapTrap( NULL, 100, 50, 30){}

DiamondTrap::DiamondTrap( std::string name ):ClapTrap( name + "_clap_name", 100, 50, 30){
	this->_name = name;
	std::cout << name << " DiamondTrap has been created" << std::endl;
}

DiamondTrap::~DiamondTrap( void ){}

std::string DiamondTrap::getName( void ){
	return (this->_name);
}

void DiamondTrap::attack( const std::string & target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ){
	std::cout << "Who am I? " << this->_name << std::endl;
}