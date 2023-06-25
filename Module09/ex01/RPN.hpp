/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:28:21 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/26 00:03:56 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<int>	stack;
	public:
		RPN();
		~RPN();
		int getResult();
		void addStack(std::string num);
		void InvertedPolishCalculation(char token);
};

#endif
