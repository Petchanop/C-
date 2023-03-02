/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/02 17:39:00 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

enum command {NOMATCH, ADD, SEARCH, EXIT};

PhoneBook::PhoneBook(void){
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	PhoneBook::disPlayData(std::string data, int size)
{
	std::string space = "";
	if (int(data.length()) > size)
		std::cout << data.substr(0, size - 1) << "." << "|";
	else {
		space.resize(size - int(data.length()), ' ');
		std::cout << space << data << "|";
	}
}

void PhoneBook::ADD(void) {
	std::string input[5];

	if (current == ARRAY_SIZE)
		current = 0;
	std::cout<< "firstname " << std::endl;
	getline(std::cin, input[0]);
	std::cout<< "lastname: " << std::endl;
	getline(std::cin, input[1]);
	std::cout<< "nickname: " << std::endl;
	getline(std::cin, input[2]);
	std::cout<< "darkest secret: " << std::endl;
	getline(std::cin, input[3]);
	std::cout<< "number: " << std::endl;
	getline(std::cin, input[4]);
	this->contact[current].setData(input);
	current++;
}

void	PhoneBook::SEARCH(void)
{
	int			searchIndex;
	int			range;
	std::string input;

	if (current < ARRAY_SIZE)
		range = int(current);
	else
		range = ARRAY_SIZE;
	std::cout << "--------------" << std::endl;
	std::cout << "Search Contact" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "| Index |First Name| LastName | Nickname |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	for (int i = 0; i < range; i++)
	{
		std::cout << "|   " << i << "   |";
		disPlayData(this->contact[i].getFirstName(), 10);
		disPlayData(this->contact[i].getLastName(), 10);
		disPlayData(this->contact[i].getNickName(), 10);
		std::cout << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input))
		return ;
	std::stringstream(input) >> searchIndex;
	if (searchIndex >= 0 && searchIndex < int(current))
	{
		std::cout << "---------------" << std::endl;
		std::cout << "First Name    : " << this->contact[searchIndex].getFirstName() << std::endl;
		std::cout << "Last Name     : " << this->contact[searchIndex].getLastName() << std::endl;
		std::cout << "Nickname      : " << this->contact[searchIndex].getNickName() << std::endl;
		std::cout << "Phone Number  : " << this->contact[searchIndex].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->contact[searchIndex].getDarkSecret() << std::endl;
		std::cout << "---------------" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
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

bool	strCompare(std::string s1, std::string s2)
{
	int	i = 0;
	while (s2[i] == s1[i] && i < int(s2.length()))
		i++;
	if (i == int(s2.length()) && i == int(s1.length()))
		return (true);
	return (false);
}

std::string trimSpace(std::string str)
{
	int	i = 0;
	int	j = 0;
	for (i = 0; i < int(str.length()); i++) {
		if (str[i] >= 33)
			break;
	}
	j = i;
	while (i < int(str.length())){
		if (str[i] < 33)
			break;
		i++;
	}
	return (str.substr(j, i));
}

int	MatchCommand(std::string s)
{
	std::string input = trimSpace(s);
	if (strCompare(input, "add") || strCompare(input, "1"))
		return (ADD);
	else if (strCompare(input, "search") || strCompare(input, "2"))
		return (SEARCH);
	else if (strCompare(input, "exit") || strCompare(input, "3"))
		return (EXIT);
	else
		return (NOMATCH);
}
unsigned int PhoneBook::current = 0;

int	main(void)
{
	PhoneBook Data;
	std::string input;
	int	result;
	while (true)
	{
		std::cout << "Please choose one of the following commands by entering word or number" << std::endl;
		std::cout << "1) ADD" << std::endl;
		std::cout << "2) SEARCH" << std::endl;
		std::cout << "3) EXIT" << std::endl;
		getline(std::cin, input);
		result = MatchCommand(toLower(input));
		switch (result) 
		{
			case ADD: 
				Data.ADD();
				break ;
			case SEARCH: 
				Data.SEARCH();
				break ;
			case EXIT:
				break;
			case NOMATCH:
				std::cout << "Please enter valid command" << std::endl;
		}
		if (result == EXIT)
			break;
	}
}