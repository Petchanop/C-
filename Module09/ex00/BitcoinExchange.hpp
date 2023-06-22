/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:20:41 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/22 15:31:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <unordered_map>
#include <fstream>
#include <exception>

class BitcoinExchange {
	private:
		std::unordered_map<std::string, int> _dataValue;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void readInput(std::string filename);
		void readDatabase(std::string data);
		void calculatePrice();
		bool checkValidData(std::string line, char separator);
		class dataNotValidException : public std::exception {
			public:
			virtual const char * what() const throw(){
				return "Data format must be year-month-day and Price must be float or a positive integer between 0 and 1000.";
			}
		} dataNotValid;
};

#endif
