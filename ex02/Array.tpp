/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:28:54 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/29 18:50:15 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : data(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]()), len(n) {}

template <typename T>
Array<T>::Array(const Array &copy) : len(copy.len)
{
	this->data = new T[copy.len];
	for (int i = 0; i < copy.len; i++)
		this->data[i] = copy.data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		delete[] this->data;
		this->len = copy.len;
		this->data = new T[len];
		for (int i = 0; i < len; i++)
			this->data[i] = copy.data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->data;
}

////////

template <typename T>
T &Array<T>::operator[](size_t idx)
{
	if (idx < 0 || idx > len)
		throw IndexOutofBoundsException();
	return (data[idx]);
}

template <typename T>
const T &Array<T>::operator[](size_t idx) const
{

	if (idx < 0 || idx > len)
		throw IndexOutofBoundsException();
	return (data[idx]);
}

template <typename T>
size_t Array<T>::getLength()
{
	return (len);
}

template <typename T>
const char *Array<T>::IndexOutofBoundsException::what() const throw()
{
	return ("Index out of bounds");
}