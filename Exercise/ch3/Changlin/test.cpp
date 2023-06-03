#include <iostream>

int main(){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    long x = 5;
    std::cout<< double(x);
    return 0;
}