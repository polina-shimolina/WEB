//Проверка битов
//Если в числе содержится только один бит со значением 1, записать в выходной поток OK.
//Иначе записать FAIL.
//Необходимо использование битовых операций.
//Использование арифметических операций запрещено.

#include <iostream>

unsigned plus1(unsigned val
) {
	unsigned bit = 1;
	while (val & bit) {
		val ^= bit;
		bit <<= 1;
	}
	val |= bit;
	return val;
}

int main() {
	unsigned num;
	std::cin >> num;
	int res = 0;
	while (num) {
		if ((num >> 0) & 1) {
			if (res & 1) {
				std::cout << "FAIL";
				return 0;
			}
			else
				res = plus1(res);
		}
		num >>= 1;
	}
	if (res & 1) std::cout << "OK";
	else std::cout << "FAIL";
}

