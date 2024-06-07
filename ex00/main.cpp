/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:39:44 by siun              #+#    #+#             */
/*   Updated: 2024/06/07 12:50:13 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;

	std::cout << "----------------------------------------" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << "----------------------------------------" << std::endl;

	int *pa = &a; //3
	int *pb = &b; //2

	std::cout << "pa = " << *pa << ", pb = " << *pb << std::endl;
	swap(pa, pb);
	std::cout << "pa = " << *pa << ", pb = " << *pb << std::endl;
	std::cout << "min(pa, pb) = " << *min(pa, pb) << std::endl;
	std::cout << "max(pa, pb) = " << *max(pa, pb) << std::endl;

	return 0;
}