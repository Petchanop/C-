/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:35 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/02 17:07:37 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.hpp"
#include <iostream>

#define ARRAY_SIZE 8

class PhoneBook {
	private: 
		Contact contact[ARRAY_SIZE];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void ADD(void);
		void SEARCH(void);
		void disPlayData(std::string, int size);
		static unsigned int current;
};

#endif