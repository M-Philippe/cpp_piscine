#pragma once

#include <vector>

template <typename T>
bool	easyfind(T arr, int i) {
	for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		if (*it == i)
			return (true);
	}
	return (false);
}
