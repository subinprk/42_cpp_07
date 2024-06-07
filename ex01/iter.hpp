/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:51:43 by siun              #+#    #+#             */
/*   Updated: 2024/06/07 13:07:00 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include "iostream"

template <typename T>
void iter(T *array, size_t size, void (*func)(T const &)) {
	for (size_t i = 0; i < size; i++) {
		func(array[i]);
	}
}

template <typename T>
void print(T const &a) {
	std::cout << a << std::endl;
}

#endif
