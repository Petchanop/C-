/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:54:16 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 00:48:30 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Floor Character::floor;

Character::Character( std::string name ):_name(name),_idx(0){
	std::cout << "Character " << this->_name << " has been create." << std::endl;
}

Character::~Character(){}

std::string const & Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria *m){
	if (_idx < 4){
		_inventory[_idx] = m->clone();
		std::cout << this->getName() << " put " << m->getType() << " in inventory." << std::endl;
		_idx++;
	}
	else{
		std::cout << this->_name << " inventory is full." << std::endl;
	}
}

void	Character::unequip(int idx){
	if (_inventory[idx]){
		floor.updateFloor(_inventory[idx]);
		_inventory[idx] = nullptr;
	}
	else {
		std::cout << "No equipment in inventory index." << std::endl;
	}
}

void Character::use(int idx, ICharacter & target){
	std::cout << "* " << this->_name;
	if (_inventory[idx]) {
		_inventory[idx]->use(target);
	}
	else
		std::cout << " has no equipment." << std::endl;
}