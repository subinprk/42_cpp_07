/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:29:13 by subpark           #+#    #+#             */
/*   Updated: 2024/06/18 17:28:51 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main(){

	Array<int> arr(5);
	for (int i = 0; i < arr.size(); i ++)
		arr[i] = i;
	for (int i = 0; i < arr.size(); i ++)
		std::cout << arr[i] << std::endl;
	Array<std::string> arr2(3);
	arr2[0] = "Hello";
	arr2[1] = "World";
	arr2[2] = "!";
	for (int i = 0; i < arr2.size(); i ++)
		std::cout << arr2[i] << std::endl;
	//arr2 = arr;
	arr2[0] = arr[0];
	for (int i = 0; i < arr2.size(); i ++)
		std::cout << arr2[i] << std::endl;
	Array<std::string> arr3;
	arr3 = arr2;
	for (int i = 0; i < arr3.size(); i ++)
		std::cout << arr3[i] << std::endl;
	Array<int> arr4(arr);
	for (int i = 0; i < arr4.size(); i ++)
		std::cout << arr4[i] << std::endl;
	return 0;
}