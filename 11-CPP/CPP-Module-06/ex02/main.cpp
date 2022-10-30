/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:39:47 by bledda            #+#    #+#             */
/*   Updated: 2021/10/06 14:32:10 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void)
{
	std::srand(std::time(0));
	int ran = rand() % 3;
	Base * p;
	
	switch (ran)
	{
		case 0: p = new A; break ;
		case 1: p = new B; break ;
		case 2: p = new C;
	}
	return (p);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "is C" << std::endl;
	return ;
}

void identify( Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "is A" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "is B" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "is C" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	return ;
}

int main(void)
{
	Base * base = generate();

	identify(*base);
	identify(base);
	return (0);
}
