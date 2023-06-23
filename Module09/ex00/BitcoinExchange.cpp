/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/23 20:22:29 by npiya-is         ###   ########.fr       */
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
			checkValidData(_inputData, line, '|');
			this->calculatePrice();
		}
		file.close();
	}
}

static unsigned int getDay(int year, int month){
	if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			return 29;
		} else {
			return 28;
		}
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	} else {
		return 31;
	}
}

static bool checkValidDate(std::string key){
	int Year;
	int Month;
	int Day;
	bool track = false;

	if (!key.empty()){
		for (unsigned int i = 0; i < key.length(); i++){
			if (key[i] == '-' && !track){
				Year = std::stoi(key.substr(0, i));
				if (i > 4 || i < 4)
					return false;
				Month = std::stoi(key.substr(i + 1));
				if (Month < 1 || Month > 12)
					return false;
				track = true;
			}
			if (key[i] == '-' && track)
				Day = std::stoi(key.substr(i + 1));
		}
		unsigned int dayInMonth = getDay(Year, Month);
		if (Day > dayInMonth || Day < 0)
			return false;
		return true;
	}
	return false;
}

static bool checkValidPrice(std::string value){
	if (!value.empty()){
		for (unsigned int i = 0; i < value.length(); i++){
			if (value[i] < '0' || value[i] > '9'){
				return false;
			}
		}
		float val = std::stof(value);
		if (val >= 0 && val <= 1000)
			return true;
	}
	else {
		return false;
	}
}

bool BitcoinExchange::checkValidData(std::unordered_multimap<std::string,float> container, std::string line, char separator){
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
			container.insert({key, std::stof(value)});
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
			checkValidData(_dataBase, line, ',');
		}
		file.close();
	}
}

void BitcoinExchange::calculatePrice(){
	for (std::unordered_multimap<std::string, float>::iterator data = _inputData.begin();
		data != _inputData.end(); data++){
		for (std::unordered_multimap<std::string, float>::iterator input = _dataBase.begin();
		input != _dataBase.end(); input++){
			if ((*data).first == (*input).first){
				std::cout << (*data).first << " << " << (*input).second << " = " << (*data).second * (*input).second << std::endl;
			}
		}
	}
}



