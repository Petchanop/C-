/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:35 by npiya-is          #+#    #+#             */
/*   Updated: 2023/02/28 20:08:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.hpp"
#include <iostream>

class PhoneBook {
	private: 
		Contact contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void ADD(std::string input);
};

#endif