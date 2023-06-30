/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:24:08 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/29 17:24:14 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

struct Data{
	uintptr_t	value;
};

class Serializer {
	public:
		Serializer();
		~Serializer();
		Serializer(Serializer const & copy);
		Serializer & operator=(Serializer const & rhs);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
