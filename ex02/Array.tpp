/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:19:16 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/05 14:05:16 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
Array<T>::Array(): _n(0), data(nullptr)
{
}

// because of const members _n must bie initialized list
template <typename T>
Array<T>::Array(unsigned int size) : _n(size),  data(nullptr)
{
	data = new T[size]();
}

template <typename T>
Array<T>::~Array()
{
	delete[] data;	
}

template <typename T>
Array<T>::Array(const Array<T> &object) : _n(object._n), data(nullptr)
{
	if(object.data)
	{
		data = new T[object._n];
		for(unsigned int i = 0; i < object._n; i++)
		{
			data[i] = object.data[i];
		}
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &object)
{
	if(this != &object)
	{
		delete[] this->data;
		this->data = nullptr;
		this->_n = object._n;
		if(object.data)
		{
			for(unsigned int i = 0; i < object._n; i++)
			{
				this->data[i] = object->data[i]; 
			}
		}
	}
	return (*this);
}


template <typename T>
unsigned int Array<T>::size() const
{
	return this->_n;
}


template <typename T>
void Array<T>::printValue(T value) {
    std::cout << value << std::endl;
}

template <typename T>
void Array<T>::printValue(T value) const 
{
    std::cout << value << std::endl;
}



template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if(index >= _n)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const 
{
	if(index >= _n)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}