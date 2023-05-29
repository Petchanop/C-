/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:01:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/30 00:57:31 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc == 2){
		ScalarConverter converter;
		converter.convert(argv[1]);
		return (EXIT_SUCCESS);
	}
	else {
		std::cerr << "arguments more than one parameter." << std::endl;
	}
	return (EXIT_FAILURE);
}