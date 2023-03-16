/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:45:30 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 20:21:54 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

unsigned int Brain::_index = 0;

Brain::Brain( void ){}

Brain::Brain( Brain const & copy )
{
	Brain *newBrain = new Brain(copy);
	*this = *newBrain;
}

Brain::~Brain( void ){}

void Brain::setIdea(std::string idea){
	if (_index == 100)
		_index = 0;
	this->ideas[_index] = idea;
	_index++;
}

std::string * Brain::getIdea( void ){
	return (this->ideas);
}