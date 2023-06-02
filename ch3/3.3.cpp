#include <iostream>
using namespace std;

const double degreeToMin = 60;
const double MinToSecond = 60.0;

int main(){

    double latitude;
    int d,m,s;
    cout << "Enter a latitude in degrees,minutes,and seconds: "<< endl;
    cout << "First, enter the degrees: ";
    cin >> d;
    cout <<"Next,enter the minutes of arc: ";
    cin >> m;
    cout << "Finally, enter the seconds of arc: ";
    cin >> s;

    latitude = d + (s/MinToSecond + m)/degreeToMin;
    cout << d<<" degrees, "<< m<<" minutes, " << s << " seconds = "
    << latitude<<"degrees."<<endl;

    return 0;
}