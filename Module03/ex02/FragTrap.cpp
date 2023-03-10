/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:41:17 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 21:08:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ):ClapTrap(NULL, 100, 100, 30){}

FragTrap::FragTrap( std::string name):ClapTrap(name, 100, 100, 30){}

FragTrap::~FragTrap( void ){};

void	FragTrap::highFivesGuys( void ){
	std::cout << this->getName() << " high five Guys." << std::endl;
}

void	FragTrap::attack(const std::string & target){
	std::cout << "FragTrap" << " " << this->getName() << " ";
	std::cout << "attacks" << " " << target << ", ";
	std::cout << "causing" << " " << this->getATK() << " ";
	std::cout << "points of damage!" << std::endl;
	this->energyUse(1);
}
