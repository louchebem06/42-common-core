/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:38:01 by bledda            #+#    #+#             */
/*   Updated: 2021/09/22 16:35:27 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ecrivez un modèle de classe Array qui contient des éléments de type T
et qui permet le comportement suivant :

• Construction sans paramètre : crée un tableau vide.

• Construction avec un entier n non signé en paramètre :
	crée un tableau de n éléments, initialisé par défaut.
	(Astuce : essayez de compiler int * a = new int();, puis afficher *a.)

• Construction par copie et opérateur d'affectation.
	Dans les deux cas, modifier l'un des les deux tableaux
	après la copie/l'affectation n'affecteront rien dans l'autre tableau.

• Vous DEVEZ utiliser l'opérateur new[] pour votre allocation.
	Vous ne devez pas faire de prévention allocation.
	Votre code ne doit jamais accéder à la mémoire non allouée.

• Les éléments sont accessibles via l'opérateur[].

• Lors de l'accès à un élément avec l'opérateur [], si cet élément est hors limites,
	une std::exception est levée.

• Une taille de fonction membre qui renvoie le nombre d'éléments dans le tableau.
	Cette la fonction membre ne prend aucun paramètre et ne modifie pas l'instance
	actuelle de toute façon.

Enveloppez votre travail dans un exécutable qui prouve que votre modèle de classe
fonctionne comme destiné.
*/

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array(void)
		{
			this->_tab = new T[0];
			this->_size = 0;
			return ;
		}

		~Array(void)
		{
			if (this->_size > 0)
				delete [] this->_tab;
			return ;
		}

		Array(unsigned int i)
		{
			this->_tab = new T[i];
			this->_size = i;
			return ;
		}

		Array(Array const & src)
		{
			*this = src;
		}
		
		Array &	operator=(Array const & rhs)
		{
			_tab = new T[rhs._size];
			_size = rhs._size;
			for (unsigned int i = 0; i < rhs._size; i++)
				_tab[i] = rhs._tab[i];
			return (*this);
		}

		class OperatorException: public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Not within the limit";
				}
		};

		T & operator[](int i)
		{
			if (i >= static_cast<int>(_size) || i < 0)
				throw Array::OperatorException();
			return (_tab[i]);
		}
	private:
		T *				_tab;
		unsigned int 	_size;
};

#endif
