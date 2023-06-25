/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/25 15:25:21 by npiya-is         ###   ########.fr       */
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
			if (checkValidData(_inputData, line, '|'))
				this->calculatePrice();
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
	try
	{
		std::string errorMsg;
		if (!checkValidDate(key)) {
			errorMsg = "Error: bad input => ";
			errorMsg.append(key);
			char * badinput = &errorMsg[0];
			throw dataNotValidException(badinput);
		}
		else if (!checkValidPrice(value)) {
			if (!isdigit(value[0]) && value[0] != '-')
				return false;
			else if (std::stof(value) < 0)
				errorMsg = "Error: not a positive number.";
			char *valueError = &errorMsg[0];
			throw dataNotValidException(valueError);
		}
		else if (checkValidDate(key)){
			container.insert(std::pair<std::string, float>(key, std::stof(value)));
			return true;
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return false;
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
	std::multimap<std::string, float>::reverse_iterator input = _inputData.rbegin();
	std::multimap<std::string, float>::iterator data,itlow;
	itlow = _dataBase.lower_bound((*input).first);
	itlow--;
	if (!_inputData.empty())
	{
		if ((*input).second > 1000){
			std::cerr << "Error: too large a number.\n";
			return ;
		}
	}
	for (data = _dataBase.begin(); data != _dataBase.end(); data++){
		if ((*data).first.compare((*input).first) && itlow == data){
			std::cout << (*input).first << "=> " << (*input).second << " = " << (*data).second * (*input).second << std::endl;
			break;
		}
	}
}



