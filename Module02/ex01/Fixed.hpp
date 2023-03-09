/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:58 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/08 16:47:05 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>

class Fixed {
	private:
		int	_fixedPoint;
		static const int _fractbit = 8;
	public:
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		Fixed ( Fixed const &copy );
		Fixed & operator = (Fixed const & fixed);
		~Fixed( void );
		int	getRawBits( void );
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int	toInt( void ) const;
};

std::ostream & operator <<( std::ostream & o, Fixed const & i );

#endif