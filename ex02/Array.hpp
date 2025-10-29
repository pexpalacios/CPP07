/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:15:23 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/29 18:48:23 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T *data;
		size_t len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		~Array();
		
		T &operator[](size_t idx);
		const T &operator[](size_t idx) const;
		size_t getLength();

		class IndexOutofBoundsException : public std::exception
		{
			const char *what() const throw();
		};
};

#include "Array.tpp"

#endif