/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:41:08 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/19 23:57:11 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor( void ):idx(0){}

Floor::~Floor( void ){}

void Floor::showFloorState( void ){
	if (idx > 0){
		for (unsigned int i = 0; i < idx; i++){
			std::cout << "There are equipment on the floor..." << std::endl;
			std::cout << unEquipMateria[i]->getType() << std::endl; 
		}
	}
	else
		std::cout << "There are no equipment on the floor..." << std::endl;
}

void Floor::updateFloor(AMateria *m){
	if (idx < 100) {
		unEquipMateria[idx] = m;
		idx++;
	}
	else
		idx = 0;
}
