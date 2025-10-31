/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:00:59 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/31 15:33:59 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void f(T const &tmp)
{
	std::cout << tmp << " ";
}

int main(void)
{
	int arr_int[] = {1, 2, 3, 4, 5};
	::iter(arr_int, 5, ::f<int>);
	std::cout << std::endl;

	const int arr_int_const[] = {1, 2, 3, 4, 5};
	::iter(arr_int_const, 5, ::f<const int>);
	std::cout << std::endl;

	std::string arr_str[] = {"aaa", "bbb", "ccc"};
	::iter(arr_str, 3, ::f<std::string>);
	std::cout << std::endl;

	float arr_float[] = {1.5f, 2.4f, 3.3f, 4.2f, 5.1f};
	::iter(arr_float, 5, ::f<float>);

	return (0);
}