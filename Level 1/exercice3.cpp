#include <iostream>
#include <vector>
#include <numeric>


int main(){

    std::vector<double> numbers = {17, 17, 17, 17};
    std::cout << "the average is : ";
    
    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);

    std::cout << sum / 4;
    
    
    return 0;
}
