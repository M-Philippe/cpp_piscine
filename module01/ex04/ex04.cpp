#include <iostream>
#include <cstring>
#include <unistd.h>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << "Pointer: " << *ptr << "\n";
	std::cout << "Reference: " << ref << "\n";
}