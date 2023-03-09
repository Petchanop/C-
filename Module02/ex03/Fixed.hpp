/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:58 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 14:31:21 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
	private:
		int	_fixedPoint;
		int	_fixedPoint1;
		int	_fixedPoint2;
		static const int _fractbit = 8;
	public:
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		Fixed ( Fixed const &copy );
		Fixed (Fixed _fixedPoint1, Fixed _fixedPoint2);
		Fixed & operator = (Fixed const & fixed);
		bool operator > (Fixed const & r);
		bool operator >= (Fixed const & r);
		bool operator < (Fixed const & r);
		bool operator <= (Fixed const & r);
		bool operator == (Fixed const & r);
		bool operator != (Fixed const & r);
		Fixed & operator + (Fixed const & r);
		Fixed & operator - (Fixed const & r);
		Fixed & operator * (Fixed const & r);
		Fixed & operator / (Fixed const & r);
		Fixed operator ++ (void);
		Fixed operator ++ ( int );
		Fixed operator -- (void);
		Fixed operator -- ( int );
		~Fixed( void );
		int	getRawBits( void ) const ;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int	toInt( void ) const;
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(Fixed const & a, Fixed const & b);
		static Fixed min(Fixed & a, Fixed & b);
		static Fixed min(Fixed const & a, Fixed const & b);
};

std::ostream & operator <<( std::ostream & o, Fixed const & i );

#endif