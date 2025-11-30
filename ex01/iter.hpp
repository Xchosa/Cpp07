/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/30 20:48:45 by poverbec         ###   ########.fr       */
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
template <typename T> void iter(T &x, T &y , T &z)
{
	
}
/*
The first parameter is the address of an array.•
The second one is the length of the array, passed as aconstvalue.•
The third one is a function that will be called on every element of the array.
*/