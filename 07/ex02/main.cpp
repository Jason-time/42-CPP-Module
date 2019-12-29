/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:32:13 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/28 15:54:14 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Number.hpp"
#include "Array.hpp"

int main(void)
{
	Array<int> intR;

	Array<int> intRR(5);
	intR = intRR;
	for (unsigned i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
	for (unsigned i = 0; i < intRR.size(); i++)
	{
		std::cout << intRR[i] << " ";
	}
	std::cout << std::endl;

	Array<float> floatR(25);
	for (unsigned i = 0; i < floatR.size(); i++)
	{
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;

	Array<std::string> stringR(5);
	for (unsigned i = 0; i < stringR.size(); i++)
	{
		stringR[i] = std::to_string(i);
		std::cout << stringR[i] << " ";
	}
	std::cout << std::endl;

	Array<Number> numberR(5);
	for (unsigned i = 0; i < numberR.size(); i++)
	{
		numberR[i] = i + 42;
		std::cout << numberR[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		intRR[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intRR[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}