/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:01:34 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/31 15:33:35 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, const int len_arr, void (*f)(const T &))
{
	for (int i = 0; i < len_arr; i++)
		f(arr[i]);
}

template <typename T>
void iter(T *arr, const int len_arr, void (*f)(T &))
{
	for (int i = 0; i < len_arr; i++)
		f(arr[i]);
}

#endif