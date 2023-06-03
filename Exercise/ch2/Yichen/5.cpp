#include <iostream>
float my_fun(float);

//int main()
//{
//	using namespace std;
//	float t;
//	cout << "Please enter a Clesius value: ";
//	cin >> t;
//	cout << t << " degrees Celsius is " << my_fun(t) << " degress Fahrenheit.";
//
//	return 0;
//}

float my_fun(float t)
{
	return 1.8 * t + 32.0;
}