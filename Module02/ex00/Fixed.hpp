/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:58 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/07 22:49:16 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	private:
		int	fixVal;
		static const int fractbit = 8;
	public:
		Fixed( void );
		Fixed ( Fixed& copy );
		Fixed& operator = (Fixed& fixed);
		~Fixed( void );
		int	getRawBits( void );
		void setRawBits( int const raw );
};

#endif