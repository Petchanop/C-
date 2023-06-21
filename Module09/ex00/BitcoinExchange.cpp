/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:37 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/22 02:01:06 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <unordered_map>
#include <fstream>

class BitcoinExchange {
	private:
		std::unordered_map<std::string, int> _dataValue;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void readData(std::ofstream &file);
		void calculatePrice();
};

#endif
