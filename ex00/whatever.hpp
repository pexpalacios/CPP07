/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:51:42 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/27 15:58:45 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
void swap(T &x, T &y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif