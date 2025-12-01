/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 14:25:30 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template <typename T> T max(T x, T y)
{
	return (x > y) ? x : y;
}


template <typename T> T min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T> void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}
//template <typename T> void iter(T *array, int length , void (*function) (T&))
//{
//	for(int i = 0; i < length; i++)
//	{
//		function(array[i]);
		
//	}
//}

// generic function Pointer 
// deduce 
template <typename T, typename FuncType>
void iter( T *array, int length, FuncType function)
{
	
	for(int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}