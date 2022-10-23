//Количество бит
//Подсчитать кол - во единичных бит в входном числе, стоящих на четных позициях.
//Позиции битов нумеруются с 0.
//
//Необходимо использование битовых операций.
//Использование арифметических операций запрещено.

#include <iostream>
using namespace std;

unsigned plus1(int val) {
	int bit = 1;   
	while (val & bit) { 
		val ^= bit;
		bit <<= 1;
	}
	val |= bit;
	return val;
}

int main()
{
	int num;
	std::cin >> num;
	int res = 0;
	while (num) {
		if ((num >> 0) & 1) {
			res = plus1(res);
		}
		num >>= 2;
	}
	std::cout << res;
}
