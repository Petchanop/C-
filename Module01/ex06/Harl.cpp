/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:26:06 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/06 17:50:35 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum complainType {NOMATCH, DEBUG, INFO, WARNING, ERROR};

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
		if (func[i].find(level) == 0){
			((*funcptr[i]))();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}

std::string toLower(std::string lower)
{
	for (int i = 0; i < int(lower.length()); i++)
	{
		if (lower[i] >= 'A' && lower[i] <= 'Z')
			lower[i] += 32;
	}
	return (lower);
}

int	MatchComplain(std::string s)
{
	if (s.compare("debug") == 0)
		return (DEBUG);
	else if (s.compare("info") == 0)
		return (INFO);
	else if (s.compare("warning") == 0)
		return (WARNING);
	else if (s.compare("error") == 0)
		return (ERROR);
	else
		return (NOMATCH);
}

void	Harl::filter( std::string level ){
	Harl harl = Harl();	
	std::string type = toLower(level);
	int	result = MatchComplain(type);
	switch (result) {
		case DEBUG:
			harl.complain("debug");
			fallthrough;
		case INFO:
			harl.complain("info");
		case WARNING:
			harl.complain("warning");
		case ERROR:
			harl.complain("error");
			break;
		default :
			harl.complain("nomatch");
			break ;
	}
}