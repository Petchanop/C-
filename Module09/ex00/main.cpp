/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 23:23:25 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/24 23:57:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){
	BitcoinExchange btc;
	btc.readDatabase("data.csv");
	if (argc == 2) {
		btc.readInput(argv[1]);
	} else {
		std::cout << "No file input\n";
	}
	return 0;
}
