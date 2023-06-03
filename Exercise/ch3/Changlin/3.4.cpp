#include <iostream>
using namespace std;

const long Hours = 24;
const long Minutes = 60;
const long Seconds = 60;

int main(){

    long s;
    cout << "Enter the number o seconds: ";
    cin >> s;
    long D = ((s/Seconds)/Minutes)/Hours;
    long H = ((s/Seconds)/Minutes)%Hours;
    long M = (s/Seconds)%Minutes;
    long S = s%Seconds;
    cout << s << " seconds = "<< D<<" days, "<<H<<" hours, "<<M<<" minutes,"<<S<<" seconds";
    return 0;
}