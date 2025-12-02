/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/02 16:25:11 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array{
	
	private:
	T* data;
	unsigned int _n;

	public:
	Array();
	Array(unsigned int size);
	~Array();
	Array<T>(const Array<T> &object);
	Array<T>& operator=(const Array<T> &object);

	void printValue(T value);
	T& operator[] (unsigned int index);
	unsigned int size();
};


#include "Array.tpp"