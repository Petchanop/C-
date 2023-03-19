/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:47:10 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/19 18:18:28 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria *_materia[4];
		unsigned int _idx;
		static unsigned int _size;
	public:
		MateriaSource( void );
		~MateriaSource( void );
		void learnMateria(AMateria *materia );
		AMateria* createMateria(std::string const & type);
};

#endif