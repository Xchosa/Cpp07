/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/30 20:38:09 by poverbec         ###   ########.fr       */
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