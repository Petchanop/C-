/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:46:24 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/19 22:11:15 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

unsigned int MateriaSource::_size = 4;

MateriaSource::MateriaSource( void ):_idx(0){
	std::cout << "MateriaSource has been create." << std::endl;
}

MateriaSource::~MateriaSource( void ){}

void MateriaSource::learnMateria( AMateria *materia){
	if (materia)
	{
		if (_idx == _size)
			_idx = 0;
		_materia[_idx] = materia;
		_idx++;
		std::cout << "Has learn " << materia->getType() << "." << std::endl;
	}
	else {
		std::cout << "Can't learn this Materia." << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	std::string compare;
	compare = type;
	compare[0] = toupper(type[0]);
	for (unsigned int i = 0; i < _size; i++){
		if (_materia[i] && !_materia[i]->getType().compare(compare))
			return (_materia[i]->clone());
	}
	return (nullptr);
}