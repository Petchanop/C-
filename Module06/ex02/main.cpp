/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:02:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/13 22:48:21 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	is_prime(int number){
	if (number == 0 || number == 1)
		return 0;
	for (int i = 2; i < number; i++){
		if (number % i == 0)
			return (0);
	}
	return (1);
}

Base * generate(void){
	srand(time(0));
	int random = rand();
	if (is_prime(random))
		return (new A());
	else if (random % 2 == 0)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void	identify(Base &p){
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main(void){
	Base *a = generate();

	identify(a);
	identify(*a);
	delete a;
}
