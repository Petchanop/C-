/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:44:42 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/30 15:51:43 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"
// #include <iostream>
// #include <iterator>
// #include <array>

// int main(void){
// 	std::cout << "Test create int array instance size 5.\n";
// 	Array<int>intArray(5);
// 	std::cout << "Array size : " << intArray.size() << std::endl;

// 	std::cout << "Show array is initialize by default value.\n";
// 	std::cout << intArray[0] << std::endl;
// 	std::cout << intArray[1] << std::endl;
// 	std::cout << intArray[2] << std::endl;
// 	std::cout << intArray[3] << std::endl;
// 	std::cout << intArray[4] << std::endl;

// 	std::cout << "initialize index 0 equal 1.\n";
// 	intArray[0] = 1;
// 	std::cout << intArray[0] << std::endl;

// 	std::cout << "Create string array size 10.\n";
// 	Array<std::string>stringArray(10);

// 	std::string test = "test";
// 	for (size_t i = 0; i < stringArray.size(); i++){
// 		char ch = i + 49;
// 		stringArray[i] = test + ch;
// 	}

// 	for (size_t i = 0; i < stringArray.size(); i++){
// 		std::cout << "string array index " << i << " is " << stringArray[i] << std::endl;
// 	}

// 	std::cout << "Test copy constructor.\n";

// 	Array<std::string>Copy(stringArray);

// 	std::cout << "Change stringArray[0] from ""\test\"\" to  not the same\n";
// 	stringArray[0] = "not the same.";

// 	for (size_t i = 0; i < Copy.size(); i++){
// 		std::cout << "Copy array index " << i << " is " << Copy[i] << std::endl;
// 	}

// 	std::cout << stringArray[0] << std::endl;

// 	std::cout << "Create empty array.\n";
// 	Array<std::string>Outofbound;
// 	try
// 	{
// 		std::cout << "show size of array equal " << Outofbound.size() << std::endl;
// 		std::cout << Outofbound[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

#include <iostream>
// #include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

