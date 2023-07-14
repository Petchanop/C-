/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:20:41 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/14 20:50:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <exception>
#include <cstdlib>

class BitcoinExchange {
	private:
		std::multimap<std::string, float> _dataBase;
		std::multimap<std::string, float> _inputData;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void readInput(std::string filename);
		void readDatabase(std::string data);
		void calculatePrice(std::string input);
		bool checkValidData(std::multimap<std::string, float> &container, std::string line, char separator);
};

#endif
