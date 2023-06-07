/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:51:20 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/31 19:41:20 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr){
	return reinterpret_cast<std::uintptr_t>(ptr);	
}

Data * Serializer::deserialize(uintptr_t raw){
	reinterpret_cast<Data*>(raw)->value = raw;
	return reinterpret_cast<Data*>(raw);
}