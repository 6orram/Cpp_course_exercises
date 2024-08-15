#include <iostream>
#include <vector>


int main(){

    std::string name;
    std::string age;

    std::cout << "enter your name : ";
    std::cin >> name;

    std::cout << "enter your age : ";
    std::cin >> age;


    std::cout << "welcome " + name + " you have " + age + " thanks :>";
    
    return 0;
}
