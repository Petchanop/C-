/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:45:30 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/17 01:57:33 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ):_index(0){}

Brain::Brain( Brain const & copy )
{
	_index = copy._index;
	std::cout << "Copy " << copy.ideas[0] << std::endl;
	for (int i = 0; !copy.ideas[i].empty(); i++){
		this->ideas[i] = copy.ideas[i];
	}
}

Brain::~Brain( void ){}

void Brain::setIdea(std::string idea) {
	if (_index == 100)
		_index = 0;
	ideas[_index] = idea;
	_index++;
}

std::string * Brain::getIdea( void ) {
	return (this->ideas);
}

Brain & Brain::operator = (Brain const &rhs){
	_index = rhs._index;
	for (int i = 0; !rhs.ideas[i].empty() ; i++){
		ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

// std::ostream & operator << (std::ostream &os, Brain const & brain){
// 	for (int i = 0; !brain.ideas[i].empty(); i++){
// 		os << brain.ideas[i] << std::endl;
// 	}
// 	return os;
// }
