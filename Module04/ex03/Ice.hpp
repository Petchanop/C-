/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:50:30 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/19 18:32:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	private:
		std::string	_type;
	public:
		Ice( void );
		Ice( std::string const & type);
		Ice(Ice const &copy);
		~Ice( void );
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif