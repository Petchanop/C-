/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:54:16 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 18:13:47 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Floor Character::floor;

Character::Character( std::string name ):_name(name),_idx(0){
	std::cout << "Character " << this->_name << " has been create." << std::endl;
}

Character::Character(Character const & copy){
	_name = copy.getName();
	for (unsigned int i = 0; i < copy._idx; i++){
		_inventory[i] = copy._inventory[i]->clone();
	}
	_idx = copy._idx;
}

Character::~Character(){
	for (unsigned int i = 0; i < _idx; i++){
		delete _inventory[i];
	}
}

std::string const & Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria *m){
	if (_idx < 4){
		_inventory[_idx] = m;
		std::cout << this->getName() << " put " << m->getType() << " in inventory." << std::endl;
		_idx++;
	}
	else{
		std::cout << this->_name << " inventory is full." << std::endl;
	}
}

AMateria * Character::getMateria(int idx){
	if ((unsigned int)idx < _idx && _inventory[idx]){
		return (_inventory[idx]);	
	}
	return (nullptr);	
}

void	Character::unequip(int idx){
	std::cout << this->_name;
	if ((unsigned int)idx < _idx && _inventory[idx]){
		std::cout << " unequip " << this->_inventory[idx]->getType() << "." << std::endl;
		// floor.updateFloor(_inventory[idx]);
		_inventory[idx] = nullptr;
		// floor.showFloorState();
		_idx--;
	}
	else {
		std::cout << " has no equipment in inventory index." << std::endl;
	}
}

void Character::use(int idx, ICharacter & target){
	std::cout << "* " << this->_name;
	if ((unsigned int)idx < _idx && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
	else
		std::cout << " has no equipment in inventory index." << std::endl;
}