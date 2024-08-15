#include <iostream>
#include <vector>


void Max(std::vector<int> nums){
    
    int max = nums.at(0);

    for(int i=1;i<nums.size();i++){
        if(nums.at(i) > max){
            max = nums.at(i);
        }
    }

    std::cout << "Max : " << max;
}

int main(){

    std::vector<int> numbers;
    int i=1;

    while (i <= 5){
        int number;
        std::cout << "Number " << i++ << ": ";
        std::cin >> number;
        numbers.push_back(number);
    }

    Max(numbers);

    return 0;
}
