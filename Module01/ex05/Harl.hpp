/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:26:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/06 17:01:38 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl {
	private:
		static void debug( void );
		static void info( void );
		static void warning( void );
		static void error( void );
	public:
		Harl ( void );
		~Harl( void );
		void complain( std::string level);
};

#endif