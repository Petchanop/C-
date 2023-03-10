/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:06:04 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 21:08:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ):ClapTrap(NULL, 100, 50, 20){};

ScavTrap::ScavTrap( std::string name):ClapTrap(name, 100, 50, 20){}

ScavTrap::~ScavTrap( void ){};

void	ScavTrap::guardGate( void ){
	std::cout << this->getName() << " has now in Gate keeper Mode" << std::endl;
}

void	ScavTrap::attack(const std::string & target){
	std::cout << "ScavTrap" << " " << this->getName() << " ";
	std::cout << "attacks" << " " << target << ", ";
	std::cout << "causing" << " " << this->getATK() << " ";
	std::cout << "points of damage!" << std::endl;
	this->energyUse(1);
}
