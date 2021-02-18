#include <iostream>
#include <string>
#include <string.h>
#include "iter.hpp"

int main() {
	int len = 10;
	int* arr = new int[len];
	for (int i = 0; i < len; i++) {
		arr[i] = 0;
	}
	iter(arr, len, tFct<int>);
	for (int i = 0; i < len; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
	delete[] arr;

	char*	str = new char[len];
	bzero(str, len);
	str = strcpy(str, "HaHaLol");
	std::cout << str << std::endl;
	iter(str, len, toupper);
	std::cout << str << std::endl;
	delete[] str;
}