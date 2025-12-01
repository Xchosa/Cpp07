/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 09:55:41 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void testfunction(T &array_value)
{
    array_value = array_value *2;
}

template <typename T> void printfk(T &array)
{
    std::cout<< array << ", ";
}

int main()
{
    double testarray[] = {1,2,3,4,5,6,7,8,9,10};
    int stringarray[][3] = {"hello", "world", "shine"};

    std::cout << "print array before iter" << std::endl;
    for(int i = 0; i < 10; i ++)
    {
       std::cout << testarray[i ]<< ", ";
    }
    std::cout << std::endl;
    iter(testarray, 10, testfunction<double>);
    
    std::cout << "print array after iter" << std::endl;
    for(int i = 0; i < 10; i ++)
    {
        std::cout << testarray[i ]<< ", ";
    }
    iter(testarray, 10, printfk<double>);
    std::cout << std::endl;
	return 0;
}


