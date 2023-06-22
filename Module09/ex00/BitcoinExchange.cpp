/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/22 15:35:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::readInput(std::string filename){
	std::ifstream file(filename);
	std::string line;

	if (file.is_open()){
		while (getline(file, line))
		{

		}
	}
}

static bool checkValidDate(std::string key){

}

static bool checkValidPrice(std::string value){

}

bool BitcoinExchange::checkValidData(std::string line, char separator){
	std::string key;
	std::string value;

	for (size_t i = 0; i < line.length(); i++){
		if (line[i] == separator){
			key = line.substr(0, i);
			value = line.substr(i, line.length());
			break ;
		}
	}
	try
	{
		if (checkValidDate(key) && checkValidPrice(value)){
			_dataValue[key] = std::stof(value);
			return true;
		}
		throw dataNotValid;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return false;
	}
}

void BitcoinExchange::readDatabase(std::string data){
	std::ifstream file(data);
	std::string line;

	if (file.is_open()){
		while (getline(file, line))
		{
			checkValidData(line, ',');
		}
		file.close();
	}
}

void BitcoinExchange::calculatePrice(){

}



