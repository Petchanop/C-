/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:51:32 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 21:20:33 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Brain *brain1 = new Brain();
	brain1->setIdea("create Brain");
	brain1->setIdea("create Brain2");
	std::cout << brain1->getIdea()[0] << std::endl;
	std::cout << brain1->getIdea()[1] << std::endl;
	Brain *brain2 = new Brain(*brain1);
	delete brain1; 
	std::cout << brain2->getIdea()[0] << std::endl;
	std::cout << brain2->getIdea()[1] << std::endl;
	brain2->setIdea("create Brain3");
	std::cout << brain2->getIdea()[2] << std::endl;
	delete brain2;
	Dog* dog1 = new Dog();
	Dog* dogd = new Dog();
	dog1->getBrain()->setIdea("I am 1st dog");
	dogd->getBrain()->setIdea("I am 2nd dog");
	std::cout << dog1->getBrain()->getIdea()[0] << std::endl;
	Dog copyDog1 = *dogd;
	delete dogd;
	std::cout << "Copydog " << copyDog1.getBrain()->getIdea()[0] << std::endl;
	Cat *catd = new Cat();
	catd->getBrain()->setIdea("I amd 1st cat");
	Cat copyCat = *catd;
	delete catd;
	std::cout << "CopyCat " << copyCat.getBrain()->getIdea()[0] << std::endl;
	// delete copyDog1;
	const Dog* dog2 = new Dog(*(Dog*)dog1);
	const Dog* dog3 = new Dog(*(Dog*)dog1);
	const Dog* dog4 = new Dog(*(Dog*)dog1);
	const Dog* dog5 = new Dog(*(Dog*)dog1);
	const Cat* cat1 = new Cat();
	cat1->getBrain()->setIdea("I am 1st cat");
	const Cat* cat2 = new Cat(*(Cat*)cat1);
	const Cat* cat3 = new Cat(*(Cat*)cat1);
	const Cat* cat4 = new Cat(*(Cat*)cat1);
	const Cat* cat5 = new Cat(*(Cat*)cat1);
	const Cat* meta[5] ={cat1, cat2, cat3, cat4, cat5};
	const Dog* metaDog[5] = {dog1, dog2, dog3, dog4, dog5};
	for (int i = 0; i < 5; i++){
		meta[i]->makeSound();
		std::cout << meta[i]->getType() << std::endl;
		std::cout << meta[i]->getBrain()->getIdea()[0] << std::endl;
		delete meta[i];
	}
	for (int j = 0; j < 5; j++){
		metaDog[j]->makeSound();
		std::cout << metaDog[j]->getType() << std::endl;
		std::cout << metaDog[j]->getBrain()->getIdea()[0] << std::endl;
		delete metaDog[j];	
	}
	return 0;
}