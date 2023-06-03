#include <iostream>
using namespace std;
const double gallonToLiter = 3.785;
const double miterToKm = 100/62.14;

int main(){
    double liter,Km;
    cout << "Enter european's oil cunsumption(Liter): ";
    cin >> liter;
    cout << "Enter european's oil cunsumption(kilometer): ";
    cin >> Km;
    double euStyle = liter/Km;
    double gallon = liter/gallonToLiter;
    double miter = Km/miterToKm;
    double usStyle = miter/gallon;
    cout << usStyle << "mpg = "<< 100*euStyle<< "l/100km"<<endl;

    return 0;
}