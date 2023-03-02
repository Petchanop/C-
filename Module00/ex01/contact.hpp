/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:25:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/02 16:41:32 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <sstream>

class Contact {
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	number;
	public:
		void setData(std::string input[]);
		std::string	getfirstName(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getDarkSecret(void);
		std::string	getPhoneNumber(void);
};

#endif