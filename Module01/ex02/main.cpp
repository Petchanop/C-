/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:35:02 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 22:42:53 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string stringREF = str;

	std::cout << &str << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}