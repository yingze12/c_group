#include <iostream>
float trans(float);

//int main()
//{
//	using namespace std;
//	cout << "Enter the number of light years: ";
//	float l;
//	cin >> l;
//	cout << l << " light years = " << trans(l) << " astronomical units.";
//
//	return 0;
//}

float trans(float l)
{
	return 63240 * l;
}