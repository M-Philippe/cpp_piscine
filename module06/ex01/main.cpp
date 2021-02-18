#include <iostream>
#include <cstring>
#include <time.h>
#include <stdlib.h>

struct Data {
	std::string	_s1;
	int			_n;
	std::string	_s2;
};

char*	generateWord() {
	char*	ret = new char[9];

	for (int i = 0; i < 8; i++) {
		ret[i] = (rand() % 26) + 65;
	}
	ret[8] = '\0';
	return (ret);
}

void*	serialize(void) {
	char*	firstString = generateWord();
	int		n = rand() % 10000;
	char*	secondString = generateWord();
	char*	ret = NULL;

	std::cout << "SERIALIZATION\n" << std::endl;
	std::cout << firstString << "\n" << n << "\n" << secondString << "\n\n" << std::endl;
	ret = new char[22];
	strcpy(ret, firstString);
	*reinterpret_cast<int*>(ret+9) = n;
	strcpy((ret+13), secondString);
	delete[] firstString;
	delete[] secondString;
	return (ret);
}

Data*	deserialize(void* raw) {
	Data*		ret;
	char*		tmp;

	ret = new Data;
	tmp = static_cast<char*>(raw);
	ret->_s1 = std::string(tmp, 9);
	ret->_n = *reinterpret_cast<int*>(tmp+9);
	ret->_s2 = std::string((tmp+13), 8);
	return (ret);
}

int	main() {
	void*	raw;
	Data*	data;

	srand(time(NULL));

	raw = serialize();
	data = deserialize(raw);
	
	std::cout << "DESERIALIZATION\n\n";
	std::cout << data->_s1 << std::endl;
	std::cout << data->_n << std::endl;
	std::cout << data->_s2 << std::endl;
	
	delete[]	static_cast<char*>(raw);
	delete		data;
	
	return (0);
}