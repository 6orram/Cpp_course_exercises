#include <iostream>
#include <vector>

float convert(float C){
    return C * 1.8 + 32;
}


int main(){

    std::string name;
    float C;

    std::cout << "enter your name : ";
    std::cin >> name;

    std::cout << "enter The degree in celsius : ";
    std::cin >> C;

    std::cout << "The degree in Fahrenheit : " << convert(C) << " F";

    return 0;
}
