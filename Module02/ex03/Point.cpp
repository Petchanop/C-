/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:36:50 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 14:26:32 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ){
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point( float const x, float const y){
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point( Point const & p){
	*this = p;
}

Point::~Point( void ){}

Point & Point::operator = (Point const & p){
	this->x = p.x;
	this->y = p.y;
	return (*this);
}

float Point::getX( void ) const{
	return (this->x.toFloat());
}

float Point::getY( void ) const{
	return (this->y.toFloat());
}

float Area(Point const a, Point const b, Point const c){
	float p1 = a.getX() * (b.getY() - c.getY());
	float p2 = b.getX() * (c.getY() - a.getY());
	float p3 = c.getX() * (a.getY() - b.getY());
	return (p1 + p2 + p3) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float A = Area(a, b, c);
	float A1 = Area(point, b, c);
	float A2 = Area(a, point, c);
	float A3 = Area(a, b, point);
	return (A == A1 + A2 + A3);
}