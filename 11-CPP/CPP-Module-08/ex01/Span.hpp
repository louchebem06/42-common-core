/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:41:04 by bledda            #+#    #+#             */
/*   Updated: 2021/09/24 00:50:07 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <stdexcept>
# include <vector>

class Span
{
	public:
		Span(unsigned int const N);
		~Span(void);

		Span(Span const & src);
		Span & operator=(Span const & rhs);

		void addNumber(int const N);
		
		class ExceptionFull: public std::exception
		{
			public:
				const char * what() const throw();
		};

		class ExceptionShort: public std::exception
		{
			public:
				const char * what() const throw();
		};

		int shortestSpan(void);
		int longestSpan(void);
	private:
		Span(void);

		unsigned int const _N;
		std::vector<int> _tab;
};

#endif
