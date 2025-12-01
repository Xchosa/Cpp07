/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 16:20:24 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>

template <typename T>
class Array{
	
	private:
	unsigned int _n;

	public:
	Array(){};
	~Array(){};

	Array& Array(const Array &object);
	Array& operator=(const Array &object)
	{
		
	}
}
//template <typename T> void iter(T *array, int length , void (*function) (T&))
//{
//	for(int i = 0; i < length; i++)
//	{
//		function(array[i]);
		
//	}
//}

//const char* ExceptionOutofRange::what() const throw()
//{
//	return ErrorMessage.c_str();
//}

//class ExceptionOutofRange(int index) : public std::exception
//{
//	ErrorMessage = "out of bounds indes: " + std::to_string(index);
//}
//// generic function Pointer 
//// deduce 
//template <typename T, typename FuncType>
//void iter( T *array, int length, FuncType function)
//{
	
//	for(int i = 0; i < length; i++)
//	{
//		function(array[i]);
//	}
//}