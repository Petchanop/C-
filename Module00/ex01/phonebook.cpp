/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/02/28 20:23:55 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::ADD(std::string input) {
	for(Contact con: contact) {
		std:: cout << con.firstname << std::endl;
	}
}