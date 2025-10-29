/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:14:16 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/29 18:55:35 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> *arr_int = new Array<int>(5);
		int j = 1;
		for (size_t i = 0; i < arr_int->getLength(); i++)
		{
			(*arr_int)[i] = j++;
			std::cout << (*arr_int)[i] << " ";
		}
		std::cout << std::endl;

		Array<char> *arr_char = new Array<char>(7);
		char c = 'a';
		for (size_t i = 0; i < arr_char->getLength(); i++)
		{
			(*arr_char)[i] = c++;
			std::cout << (*arr_char)[i] << " ";
		}
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}