/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:19:16 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/02 10:57:45 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
Array<T>::Array(): _n(0), data(nullptr)
{
}

// because of const members _n must bie initialized list
template <typename T>
Array<T>::Array(unsigned int size) : _n(size), data(nullptr)
{
	data = new T[size];
}
template <typename T>
Array<T>::~Array()
{
	delete[] data;	
}

template <typename T>
Array& Array<T>::Array(const Array<T> &object) : _n(), data()
{

}

template <typename T>
Array& Array<T>::operator=(const Array<T> &object)
{
	if(this != &object)
	{
		this->_n = object._n;
		this->data = object.data;
	}
}


template <typename T>
Array<T> size()
{
	return _n;
}


template <typename T>
void Array<T>::printValue(T value) {
    std::cout << value << std::endl;
}
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if(index >= _n)
		throw std::out_of_range("Index out of bounds")
	return _data(index);
}