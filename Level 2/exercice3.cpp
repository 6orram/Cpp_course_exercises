#include <iostream>
#include <vector>
#include <numeric>

double avg(std::vector<double> numbers){

    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    return sum / 4;
}

int main(){

    std::vector<double> numbers;
    std::cout << "Type the 4 numbers " << std::endl;
    
    for (int i=0; i<4; i++){
        double number;
        std::cout << "Number " << i+1 << ": ";
        std::cin >> number;
        numbers.push_back(number);
    }

    std::cout << "the average is : ";
    std::cout << avg(numbers);
    
    
    return 0;
}
