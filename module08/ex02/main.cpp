#include <iostream>
#include "mutantstack.hpp"
	#include <vector>
	#include <map>
int main(){
	mutantstack<int> a;

	a.push(10);
	a.push(12);
	a.push(5);
	a.push(45);
	mutantstack<int>::iterator it = a.begin();
	mutantstack<int>::iterator ite = a.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		it++;
	}
}