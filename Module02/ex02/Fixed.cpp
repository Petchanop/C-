/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:28 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/02 16:55:51 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	// std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed( int const value ){
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = value << _fractbit;
}

Fixed::Fixed( float const value){
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(value * (1 << _fractbit));
}

Fixed::Fixed( Fixed const & copy){
	*this = copy;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed (Fixed o1, Fixed o2){
	this->_fixedPoint1 = o1.toInt();
	this->_fixedPoint2 = o2.toInt();
}

Fixed::~Fixed( void ){
	// std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & fixed){
	// std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = fixed._fixedPoint;
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const {
	float tofloat = static_cast<float>(this->_fixedPoint) / (1 << _fractbit); 
	return (tofloat);
}

int	Fixed::toInt( void ) const {
	int	toInt = (this->_fixedPoint >> _fractbit);
	return	(toInt);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << i.toFloat();
	return o;
}

bool Fixed::operator > (Fixed const & r){ return this->_fixedPoint > r.getRawBits(); }
bool Fixed::operator >= (Fixed const & r){ return this->_fixedPoint >= r.getRawBits(); }
bool Fixed::operator < (Fixed const & r){ return this->_fixedPoint < r.getRawBits(); }
bool Fixed::operator <= (Fixed const & r){ return this->_fixedPoint <= r.getRawBits(); }
bool Fixed::operator == (Fixed const & r){ return this->_fixedPoint == r.getRawBits(); }
bool Fixed::operator != (Fixed const & r){ return this->_fixedPoint != r.getRawBits(); }
Fixed & Fixed::operator + (Fixed const & r){ 
	this->_fixedPoint += r.getRawBits();
	return (*this);
}
Fixed & Fixed::operator - (Fixed const & r){
	this->_fixedPoint -= r.getRawBits();
	return (*this);
}
Fixed & Fixed::operator * (Fixed const & r){
	float times = this->toFloat() * r.toFloat();
	Fixed *multiply = new Fixed(times);
	return (*multiply);
}
Fixed & Fixed::operator / (Fixed const & r){
	float result = this->toFloat() / r.toFloat();
	Fixed *divided = new Fixed(result);
	return (*divided);
}

Fixed Fixed::operator ++ ( void ){
	++this->_fixedPoint;
	return (*this);
}

Fixed Fixed::operator ++ ( int ){
	Fixed pre(this->toFloat());
	++this->_fixedPoint;
	return (pre);
}

Fixed Fixed::operator -- ( void ){
	--this->_fixedPoint;
	return (*this);
}

Fixed Fixed::operator -- ( int ){
	Fixed pre(this->toFloat());
	--this->_fixedPoint;
	return (pre);
}

Fixed Fixed::max(Fixed const &a, Fixed const &b){
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

Fixed Fixed::min(Fixed const &a, Fixed const &b){
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}