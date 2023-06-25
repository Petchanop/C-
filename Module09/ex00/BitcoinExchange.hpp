/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:20:41 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/25 13:38:02 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <exception>

class BitcoinExchange {
	private:
		std::multimap<std::string, float> _dataBase;
		std::multimap<std::string, float> _inputData;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void readInput(std::string filename);
		void readDatabase(std::string data);
		void calculatePrice();
		bool checkValidData(std::multimap<std::string, float> &container, std::string line, char separator);
		class dataNotValidException : public std::exception {
			private:
				char *message;
			public:
				dataNotValidException(char *msg):message(msg){};
			virtual const char * what() const throw(){
				return message;
			}
		};
};

#endif
