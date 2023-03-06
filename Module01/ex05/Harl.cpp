/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:26:06 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/06 17:05:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){}

Harl::~Harl( void ){}

void	Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}	

void	Harl::error ( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void	Harl::complain( std::string level ){
	std::string func[4] = {"debug", "info", "warning", "error"};
	void (*funcptr[4])() = {debug, info, warning, error};
	for (int i = 0; i < 4; i++){
		if (func[i].find(level) == 0)
			((*funcptr[i]))();
	}

}