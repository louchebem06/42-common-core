/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:03:15 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 16:08:04 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << std::endl << std::endl << "ANIMAL TEST" << std::endl << std::endl;

	const Animal* meta 	= new Animal();
	const Animal* j 	= new Dog();
	const Animal* i 	= new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	std::cout << std::endl << std::endl << "WRONG TEST" << std::endl << std::endl;

	const WrongAnimal* wmeta 	= new WrongAnimal();
	const WrongAnimal* wi 		= new WrongCat();

	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();
	delete wi;
	delete wmeta;

	return (0);
}
