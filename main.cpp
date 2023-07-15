#include <iostream>

int func(int value1, int value2) {
	return value1 + value2;
}

int main(int arvc, char* argv[])
{
	int value1 = 10;
	int value2 = 20;

	std::cout << func(value1, value2) << std::endl;

	return 0;
}
