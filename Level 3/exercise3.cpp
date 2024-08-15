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

    std::cout << "give numbers except 0 because i will stop" << std::endl;

    while (true){
        int number;
        std::cout << "Number :";
        std::cin >> number;
        if (number == 0){
            std::cout << "I hate 0 :<" << std::endl;
            break;
        }
        numbers.push_back(number);
    }

    Max(numbers);

    return 0;
}
