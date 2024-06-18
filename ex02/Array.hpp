/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:41:19 by subpark           #+#    #+#             */
/*   Updated: 2024/06/18 17:29:25 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
# include <string>

template <typename T>
class Array{
	private:
		T 		*_array;
		size_t	_size;
	public:
		Array():_array(NULL), _size(0){};
		Array(int n):_array(NULL), _size(n){
			if (_size != 0)
				_array = new T[n];
		};
		~Array(){
				delete[] _array;
		};
		Array(Array &copy):_size(copy.size()){
			if (_size != 0)
				_array = new T[_size];
			for (int i = 0; i < static_cast<int>(_size); i ++)
				_array[i] = copy.array()[i];
		};
		Array &operator=(Array &copy){
			if (&copy == this)
				return *this;
			if (_size != 0)
				delete[] _array;
			_size = copy.size();
			_array = new T[_size];
			for (int i = 0; i < static_cast<int>(_size); i ++)
				_array[i] = copy.array()[i];
			return *this;
		};
		T &operator[](size_t i){
			if (i < 0 || i > _size - 1)	throw OutOfBounds();
			return _array[i];
		}
		class OutOfBounds : public std::exception{
			public:
				const char* what() const throw(){
					return "Array - Out of Range";
				};
		};
		int	size(){return _size;};
		T *array(){return _array;};
};

#endif