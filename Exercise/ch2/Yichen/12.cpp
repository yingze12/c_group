// show name and address
#include <iostream>
void ex_1(void);
void ex_2(void);

//int main()
//{
//	//ex_1();
//	ex_2();
//
//	return 0;
//}

void ex_1(void)
{
	using namespace std;
	string name;
	cout << "Please input your name: ";
	cin >> name;
	cout << "Please input your adddress: ";
	string address;
	cin >> address;
	cout << "Your name is: " << name << endl;
	cout << "Your address is: " << address << endl;
}

void ex_2(void)
{
	using namespace std;
	long d;
	cout << "Please input a distance: ";
	cin >> d;
	cout << d << " long equals: " << 220 * d << " ma" << endl;
}