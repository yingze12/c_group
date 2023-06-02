#include <iostream>s
using namespace std;

//the input is km and l
int main(){
    double km,l;
    cout << "How long did you drive: ";
    cin >> km;
    cout << "How much gasoline did you use: ";
    cin >> l;
    cout << "The european style is: "<< 100*l/km<< "Liter pro 100 Kilometers.";
    return 0;
}