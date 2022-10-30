/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:10:42 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:56:29 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define TAB 6

int main()
{
	/*
		For bug
	*/

	//Animal bug;

	std::cout << std::endl << "TEST MAIN INCLUS" << std::endl << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << "TEST CREATE DESTRUCTION" << std::endl << std::endl;
	const Animal* animals[TAB];
	for (int i = 0; i < TAB; i++)
		(i < TAB / 2) ? animals[i] = new Dog() : animals[i] = new Cat();
	for (int i = 0; i < TAB; i++)
		delete animals[i];

	std::cout << std::endl << "COPY CAT or DOG DEEP" << std::endl << std::endl;
	const Dog* z = new Dog();

	z->getBrain()->setIdeas("Wesh", 0);
	z->getBrain()->setIdeas("Hello Worlds", 1);
	const Dog* y = new Dog(*z);
	delete z;
	y->getBrain()->viewIdeas();
	delete y;
}
