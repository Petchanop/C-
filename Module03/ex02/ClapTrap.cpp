/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:08:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 21:07:50 by npiya-is         ###   ########.fr       */
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

ClapTrap::ClapTrap( std::string name, int hp, int ep, int atk){
	this->_name = name;
	this->_HP = hp;
	this->_EP = ep;
	this->_Atk = atk;
}

ClapTrap::ClapTrap( ClapTrap const & copy){
	*this = copy;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & r){
	ClapTrap *copy = new ClapTrap(r);
	return (*copy);	
}

void ClapTrap::attack(const std::string & target){
	if (this->_HP || this->_EP){
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
		this->_HP += amount;
		this->_EP--;
	}
	else
		std::cout << this->_name << " HP is 0." << std::endl; 
}

void ClapTrap::energyUse(unsigned int amount){
	if (this->_HP || this->_EP)
		this->_EP -= amount;
}

std::string ClapTrap::getName( void ){
	return (this->_name);
}

int	ClapTrap::getHP( void ){
	return (this->_HP);
}

int	ClapTrap::getEP( void ){
	return (this->_EP);
}

int	ClapTrap::getATK( void ){
	return (this->_Atk);
}

ClapTrap::~ClapTrap( void ){}