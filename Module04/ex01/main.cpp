/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:51:32 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 20:25:10 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* dog1 = new Dog();
	dog1->getBrain()->setIdea("I am 1st dog");
	std::cout << dog1->getBrain()->getIdea()[0] << std::endl;
	const Animal* dog2 = new Dog();
	const Animal* dog3 = new Dog();
	const Animal* dog4 = new Dog();
	const Animal* dog5 = new Dog();
	const Animal* cat1 = new Cat();
	const Animal* cat2 = new Cat();
	const Animal* cat3 = new Cat();
	const Animal* cat4 = new Cat();
	const Animal* cat5 = new Cat();
	const Animal* meta[10] ={cat1, cat2, cat3, cat4, cat5, dog1, dog2, dog3, dog4, dog5};
	for (int i = 0; i < 10; i++){
		meta[i]->makeSound();
		std::cout << meta[i]->getType() << std::endl;
		delete meta[i];
	}
	return 0;
}