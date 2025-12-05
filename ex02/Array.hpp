/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:27:03 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/05 14:06:14 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array{
	
	private:
	unsigned int _n;
	T* data;

	public:
	Array();
	Array(unsigned int size);
	~Array();
	Array<T>(const Array<T> &object);
	Array<T>& operator=(const Array<T> &object);

	void printValue(T value);
	void printValue(T value) const;
	T& operator[] (unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;
};


#include "Array.tpp"