#pragma once

#include <exception>
#include <vector>

template <typename T>
void	easyfind(T arr, int i) {
	for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		if (*it == i)
			return;
	}
	throw (std::exception());
}
