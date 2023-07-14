/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/14 18:29:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::readInput(std::string filename){
	std::ifstream file(filename);
	std::string line;
	int i = 0;

	if (file.is_open()){
		while (getline(file, line))
		{
			if (i != 0 && checkValidData(_inputData, line, '|')){
				this->calculatePrice(line);
			}
			i++;
		}
		file.close();
	}
}

static int getDay(int year, int month){
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
				Year = std::atoi(key.substr(0, i).c_str());
				if (i > 4 || i < 4)
					return false;
				Month = std::atoi(key.substr(i + 1).c_str());
				if (Month < 1 || Month > 12)
					return false;
				track = true;
			}
			if (key[i] == '-' && track)
				Day = std::atoi(key.substr(i + 1).c_str());
		}
		int dayInMonth = getDay(Year, Month);
		if (Day > dayInMonth || Day < 0)
			return false;
		return true;
	}
	return false;
}

static bool checkValidPrice(std::string value){
	if (!value.empty()){
		for (unsigned int i = 0; i < value.length(); i++){
			if (value[i] == '.')
				i++;
			if (value[i] != ' '){
				if (value[i] < '0' || value[i] > '9'){
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

bool BitcoinExchange::checkValidData(std::multimap<std::string,float> &container, std::string line, char separator){
	std::string key;
	std::string value;
	size_t i;
	int j = 0;
	while (line[j] < 33 && line[j]){
		j++;
	}
	if (!line[j] || line[j] == '\n')
		return true;
	for (i = 0; i < line.length(); i++){
		if (line[i] == separator){
			key = line.substr(0, i);
			i++;
			while (line[i] == ' ' && line[i] != '\0')
				i++;
			value = line.substr(i, line.length());
			break ;
		}
	}
	if (line[i] == '\0') {
			key = line.substr(0, i);
	}
	std::string errorMsg;
	if (!checkValidDate(key)) {
		errorMsg = "Error: bad input => ";
		errorMsg.append(key);
		std::cout << errorMsg << std::endl;
	}
	else if (!checkValidPrice(value)) {
		if (!isdigit(value[0]) && value[0] != '-'){
			std::cout << "Error: input not a number.\n";
			return false;
		}
		else if (std::atof(value.c_str()) < 0)
			errorMsg = "Error: not a positive number.";
		std::cout << errorMsg << std::endl;
	}
	else if (checkValidDate(key)){
		container.insert(std::pair<std::string, float>(key, std::atof(value.c_str())));
		return true;
	}
	return false;
}

void BitcoinExchange::readDatabase(std::string data){
	std::ifstream file(data);
	std::string line;
	int i = 0;

	if (file.is_open()){
		while (getline(file, line))
		{
			if (i != 0)
				checkValidData(_dataBase, line, ',');
			i++;
		}
		file.close();
	}
}

void BitcoinExchange::calculatePrice(std::string input){
	int i = 0;
	while (input[i] < 33 && input[i]){
		i++;
	}
	if (!input[i] || input[i] == '\n')
		return ;
	std::stringstream ss(input);
    std::string word;
	float quantity = 0.0;
	getline(ss, word, '|');
	ss >> quantity;
	std::multimap<std::string, float>::iterator data,itlow;
	itlow = _dataBase.lower_bound(word);
	itlow--;
	if (quantity > 1000){
		std::cout << "Error: too large a number.\n";
		return ;
	}
	if (std::atoi(word.c_str()) < 2009){
		std::cout << word << "=> " << quantity << " = " << 0 * quantity << std::endl;
		return ;
	}
	std::cout << word << "=> " << quantity << " = " << (*itlow).second * quantity << std::endl;
}



