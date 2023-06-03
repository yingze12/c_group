#include <iostream>

int main(){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    long long worldPop,usProp;
    std::cout<< "Enter the world's population: ";
    std::cin >> worldPop;
    std::cout<< "Enter the population of the US: ";
    std::cin>>usProp;
    double result = double(usProp)/double(worldPop);
    std::cout<< "The population of the US is "<<result*100<<"% of the world population.";
    return 0;

}