#include <iostream>
#include <vector>


int add(int a, int b){
    return a + b;
}

int main(){

    int a;
    int b;

    std::cout << "enter the first number : ";
    std::cin >> a;

    std::cout << "enter the second number : ";
    std::cin >> b;

    

    std::cout << "total : ";
    std::cout << add(a, b);

    return 0;
}
