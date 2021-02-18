#include "whatever.hpp"

int main() {
	int 		a = 10;
	int 		b = 152;
	char 		c = 'h';
	char		d = 'c';
	std::string	s1 = "Hoha";
	std::string	s2 = "Hello";

	std::cout << max<int>(a, b) << std::endl;
	std::cout << max<char>(c, d) << std::endl;
	std::cout << ::max<std::string>(s1, s2) << std::endl;

	std::cout << ::min<int>(a, b) << std::endl;
	std::cout << min<char>(c, d) << std::endl;
	std::cout << ::min<std::string>(s1, s2) << std::endl;

	std::cout << "Before swap\n";
	std::cout << a << "|" << b << std::endl;
	std::cout << c << "|" << d << std::endl;
	std::cout << s1 << "|" << s2 << "\n" << std::endl;

	::swap<int>(a,b);
	::swap<char>(c,d);
	::swap<std::string>(s1,s2);

	std::cout << "After swap\n";
	std::cout << a << "|" << b << std::endl;
	std::cout << c << "|" << d << std::endl;
	std::cout << s1 << "|" << s2 << std::endl;
}