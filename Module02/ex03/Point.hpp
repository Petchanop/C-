/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:32:07 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 14:32:22 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed x;
		Fixed y;
	public:
		Point( void );
		Point( float const x, float const y );
		Point ( Point const & p );
		Point & operator = ( Point const & p);
		~Point( void );
		float getX( void ) const;
		float getY( void ) const;
};

float Area(Point const a, Point const b, Point c);	
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif