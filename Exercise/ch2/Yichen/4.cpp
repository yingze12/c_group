#include <iostream>

int main()
{
	int age;
	std::cout << "Please input your age: ";
	std::cin >> age;
	std::cout << age << " years contains " << 12 * age << " months.";

	return 0;
}