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

    std::vector<int> numbers = {12,1,33,8,7,0,11};
    Max(numbers);

    return 0;
}
