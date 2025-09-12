#include <iostream>
#include <string>

int main(){

    // To if the number is positive, negative or zero.
    
    double num;

    std::cout << "Please enter any number(be negative or positive)" << std::endl;
    std::cin >> num;
    std::cout << std::endl;

    if(num > 0){
        std::cout << "The number you enter is positive." << std::endl; 
    }else if(num <= -1){
        std::cout << "The number you enter is negative." << std::endl;
    }else if(num == 0){
        std::cout << "The number you enter is zero." << std::endl;
    }else{
        std::cout << "Please enter a valid number." << std::endl;
    }
}