//Example of range-for loop
#include<iostream>
#include<vector>

int main(){

    std::vector<int> vec{4,2,3,5,1};

    std::cout << "Vector elements before: ";
    for (auto idx : vec)
        std::cout << idx << ", ";
    std::cout << "\n";

    //We need to use a reference to modify the elements
    for (auto& idx :vec)
        idx += 2;

    std::cout << "Vector elements after: ";
    for (auto idx : vec)
        std::cout << idx << ", ";
    std::cout << "\n";

    return 0;
    
}