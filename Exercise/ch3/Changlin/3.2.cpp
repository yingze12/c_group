#include <iostream>
#include <cmath>
using namespace std;

double hight();
double weight();

const int inToFeet = 12;
const double inToMeter = 0.0254;
const float kgTopound = 2.2;


int main(){
    
    double h = hight();
    double w = weight();

    cout << "Your BMI value is: "<< w/pow(h,2);

    return 0;
}

double hight(){   
    double x ,y;
    cout << "Please enter your hight in Feet: ";
    cin >> x;
    cout << "Please enter your hight in Inch: ";
    cin >> y;
    double result = (x*inToFeet + y)*inToMeter;
   
    return result;
}

double weight( ){
    double x;
    cout << "Please enter your weight: ";
    cin >> x;
    double result;
    result = x/kgTopound;
    return result;

}