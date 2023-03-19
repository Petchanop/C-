/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:41:16 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 00:34:53 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

#include "Character.hpp"
#include "AMateria.hpp"

class AMateria;

class Floor {
	private:
		unsigned int idx;
		AMateria *unEquipMateria[100];
	public:
		Floor( void );
		~Floor( void );
		void showFloorState( void );
		void updateFloor(AMateria *m);
};

#endif