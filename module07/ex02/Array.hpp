#pragma once

#include <sys/types.h>
#include <exception>

// TO REMOVE
#include <iostream>

template <typename T>
class Array
{
	private:
		T*		_array;
		u_int	_size;
	public:
		/*		CF		*/
		Array();
		Array(u_int n);
		Array(const Array<T>& org);
		Array& operator=(const Array<T>& org);
		~Array();

		T&		operator[](u_int idx) const;
		u_int	size() const;

		class outOfLimits : public std::exception {};
};

template <typename T>
Array<T>::Array() {
	_size = 0;
	_array = new T[0];
}

template <typename T>
Array<T>::Array(u_int n) {
	_array = new T[n];
	for (u_int i = 0; i < n; i++) {
		_array[i] = 0;
	}
	_size = n;
}

template <typename T>
Array<T>::Array(const Array<T>& org) {
	*this = org;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& org) {
	_array = new T[org._size];
	for (u_int i = 0; i < org.size(); i++) {
		_array[i] = org[i];
	}
	_size = org.size();
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
T&		Array<T>::operator[](u_int idx) const {
	if (idx < _size)
		return (_array[idx]);
	throw (outOfLimits());
}

template <typename T>
u_int	Array<T>::size() const { return (_size); }