/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:41:08 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 18:16:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor( void ):idx(0){}

Floor::~Floor( void ){
	for (unsigned int i = 0; i < idx; i++){
		delete unEquipMateria[i];
	}
}

void Floor::showFloorState( void ){
	if (idx > 0){
		std::cout << "There are equipment on the floor..." << std::endl;
		for (unsigned int i = 0; i < idx; i++){
			std::cout << unEquipMateria[i]->getType() << std::endl; 
		}
	}
	else
		std::cout << "There are no equipment on the floor..." << std::endl;
}

void Floor::updateFloor(AMateria *m){
	if (m && idx < 100) {
		unEquipMateria[idx] = m;
		idx++;
	}
	else if (idx == 100)
		idx = 0;
}
