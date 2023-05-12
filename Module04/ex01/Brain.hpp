/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:21:33 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:17:32 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		unsigned int	_index;
		std::string ideas[100];
	public:
		Brain( void );
		Brain( Brain const & copy);
		~Brain( void );
		Brain & operator = (Brain const &rhs);
		void setIdea(std::string idea) ;
		std::string *getIdea( void ) ;
};

// std::ostream & operator << (std::ostream &os, Brain const & brain);

#endif