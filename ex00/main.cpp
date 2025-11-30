/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/30 20:44:12 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


//int main()
//{
//	double a = 2;
//	double b = 3;
//	std::cout << "a = " << a << ", b = " << b << std::endl;
//	std::cout << "min(a, b) = " <<  min<double>(a, b) << std::endl;
//	std::cout << "max(a, b) = " << max<double>(a, b) << std::endl;
	
//	std::cout << "swap values" << std::endl;
//	swap(a, b);
//	std::cout << "a = " << a << ", b = " << b << std::endl;

//	int c = -10;
//	int d = 3;
//	std::cout << "c = " << c << ", d = " << d << std::endl;
//	std::cout << "min(c, d) = " << min<int>(c, d) << std::endl;
//	std::cout << "max(c, d) = " << max<int>(c, d) << std::endl;

//	return 0;
//}

int main()
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    return 0;
}