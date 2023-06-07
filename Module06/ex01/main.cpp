/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:28:59 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/31 19:41:02 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data *data = new Data();
	Serializer serial;
	uintptr_t value = serial.serialize(data);
	std::cout << "Data address: " << data << std::endl;
	std::cout << "serialize: " << value << std::endl;
	Data *deserial = serial.deserialize(value);
	std::cout << "deserialize: " << deserial->value << std::endl;
	std::cout << "Data address: " << deserial << std::endl;

}