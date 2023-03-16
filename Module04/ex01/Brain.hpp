/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:21:33 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/15 21:39:42 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		static unsigned int	_index;
	public:
		std::string ideas[100];
		Brain( void );
		Brain( Brain const & copy);
		~Brain( void );
		void setIdea(std::string idea);
		std::string *getIdea( void );
};

#endif