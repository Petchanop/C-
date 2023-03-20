/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:11:57 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 21:32:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include "ICharacter.hpp"
#include "Character.hpp"

#include "Floor.hpp"


int main()
{
	Floor stage;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* me2 = new Character(*(Character *)me);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	stage.updateFloor(me->getMateria(0));
	me->unequip(0);
	stage.showFloorState();
	stage.updateFloor(me->getMateria(3));
	me->unequip(3);
	stage.updateFloor(me->getMateria(1));
	me->unequip(1);
	stage.showFloorState();
	delete bob;
	delete me;
	delete src;
	std::cout << "Copy Character me2 has same materia as me Character." << std::endl;
	std::cout << me2->getMateria(0)->getType() << std::endl;
	std::cout << me2->getMateria(1)->getType() << std::endl;
	delete me2;
	return (0);
}