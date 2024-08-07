//Example of loop using the "auto" type specifier
#include<iostream>
#include<vector>

int main(){
    std::vector<int> vec{4,2,3,5,1};

    for (auto iterator = vec.begin(); iterator != vec.end(); ++iterator){
        *iterator += 2;
    }

    std::cout << "Vector Elements: ";
    for (auto iterator = vec.begin(); iterator != vec.end(); ++iterator){
        std::cout << *iterator << ", ";
    }

    std::cout << std::endl;
}