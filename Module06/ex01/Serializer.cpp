/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:51:20 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/29 17:24:05 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(Serializer const & copy){
	if (this != &copy){
		*this = copy;
	}
}

Serializer & Serializer::operator=(Serializer const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr){
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data * Serializer::deserialize(uintptr_t raw){
	reinterpret_cast<Data*>(raw)->value = raw;
	return reinterpret_cast<Data*>(raw);
}
