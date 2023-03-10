/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:08:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 16:30:41 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ){}

ClapTrap::ClapTrap( std::string name ){
	this->_name = name;
	this->_HP = 10;
	this->_EP = 10;
	this->_Atk = 0;
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy){
	*this = copy;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & r){
	ClapTrap *copy = new ClapTrap(r);
	return (*copy);	
}

void ClapTrap::attack(const std::string & target){
	if (this->_HP){
		this->_Atk = 1;
		std::cout << "ClapTrap" << " " << this->_name << " ";
		std::cout << "attacks" << " " << target << ", ";
		std::cout << "causing" << " " << this->_Atk << " ";
		std::cout << "points of damage!" << std::endl;
		this->_EP--;
	}
	else
		std::cout << this->_name << " HP is 0." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_HP || this->_EP)
	{
		this->_HP -= amount;
		std::cout << this->_name << " get " << amount << " damages." << std::endl;
	}
	else
		std::cout << this->_name << " HP is 0." << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_HP || this->_EP)
	{
		this->_HP = amount;
		this->_EP--;
	}
	else
		std::cout << this->_name << " HP is 0." << std::endl; 
}

ClapTrap::~ClapTrap( void ){}