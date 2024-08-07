//Example of C++11 universal initialization
#include<iostream>
#include<string>
#include<vector>

int main(){
    int var{7}; //Equivalent to int x = 7;
    std::string str{"Let us begin"};  //Equivalent to std::string = "Let us begin"

    std::cout << "var = " << var << "\n";
    std::cout << "str = \"" << str << "\"\n";

    //Narrowing Conventions are not allowed
    int num = 7.7; //This way the variable will be truncated down to 7
    //int num{7.7} //This is illegal
    std::cout << "num = " << num << "\n";

    //Can be used with multiple initial values
    std::vector<int> vec{4,2,3,5,1}; //std::vector variable with elements 4,2,3,5,1
    for (std::vector<int>::iterator iterator = vec.begin(); iterator != vec.end(); ++iterator){
        std::cout << *iterator << ", ";
    }
    
    std::cout << std::endl;
}