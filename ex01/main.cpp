/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 15:19:14 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

template <typename T > 
void testfunction(T &array_value)
{
    array_value = array_value *2;
}
//void constfunction(T &array_value)
//{
//    std 
//}

template <typename T> 
void printfk(T array)
{
    std::cout<< array << ", ";
}

int main()
{
    double testarray[] = {1,2,3,4,5,6,7,8,9,10};
    std::string stringarray[] = {"hello", "world", "shine"};
    int const constArray[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << "print array before iter" << std::endl;
    iter(testarray, 10, printfk<double>);
    std::cout << std::endl;
    iter(testarray, 10, testfunction<double>);
    
    std::cout << "print array after iter" << std::endl;
    iter(testarray, 10, printfk<double>);
    std::cout << std::endl;

    std::cout << "print string iter" << std::endl;
    int StringArrayLength = sizeof(stringarray) / sizeof(stringarray[0]);
    
    std::cout << StringArrayLength<< std::endl;
    iter(stringarray, StringArrayLength, printfk<std::string>);

    std::cout << std::endl;
    std::cout << "print Const Int array" << std::endl;
    iter(constArray, 10, printfk<int>);
    std::cout << std::endl;

	return 0;
}


