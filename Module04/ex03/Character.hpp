/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:54:23 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/20 16:33:39 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Floor.hpp"

class Floor;

class Character :public ICharacter {
	private:
		std::string _name;
		AMateria *_inventory[4];
		unsigned int _idx;
	public:
		Character(std::string name);
		Character(Character const & copy);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria * getMateria(int idx);
		static Floor floor;
};

#endif