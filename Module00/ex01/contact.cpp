/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:45:34 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/02 16:34:50 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::setData(std::string input[])
{
	this->firstname = input[0];	
	this->lastname = input[1];	
	this->nickname = input[2];	
	this->darkest_secret = input[3];	
	this->number = input[4];	
}

std::string	Contact::getfirstName(void)
{
	return (this->firstname);
}

std::string	Contact::getFirstName(void)
{
	return (this->firstname);
}

std::string	Contact::getLastName(void)
{
	return (this->lastname);
}

std::string	Contact::getNickName(void)
{
	return (this->nickname);
}

std::string	Contact::getDarkSecret(void)
{
	return (this->darkest_secret);
}


std::string	Contact::getPhoneNumber(void)
{
	return (this->number);
}