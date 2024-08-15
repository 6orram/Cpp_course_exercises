#include <iostream>
#include <vector>

void welcome(std::string name, int age){
    std::cout << "welcome " << name << " you have " << age << " thanks :>";
}


int main(){

    std::string name;
    int age;

    std::cout << "enter your name : ";
    std::cin >> name;

    std::cout << "enter your age : ";
    std::cin >> age;

    welcome(name, age);

    return 0;
}
