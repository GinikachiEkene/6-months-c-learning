#include <iostream>
// CONTROL FLOW

// Control flow decides which part of the code run depending on the conditions

// runs code only if a condition is true.

int main(){
    
    // 1. if, else if, else  statement

    int num = 10;
    
    if (num > 0){
        std::cout << "Postive" << std::endl;
    }else if (num < 0){
        std::cout << "Negative" << std::endl;
    }else{
        std::cout << "Zero" << std::endl;
    }
    
    // Switch statement

    int day = 3;

    switch(day){
        case 1: std::cout << "Monday" << "\n"; break;
        case 2: std::cout << "Tuesday" << "\n"; break;
        case 3: std::cout << "Wednesday" << "\n"; break;
        default: std::cout << "Invalid day" << "\n"; break;
    }

    
    // LOOPS: For repeating tasks.

    // for loop: used when the number of times to repeat is known

    for(int i = 1; 1 < 5; i++){
        std::cout << " ";
    }

    // while loop: used when the number of times is not stated(runs until the condition becomes false) 

    int i = 5;

    while(i > 0){
        //system("cls");
        std::cout << i << "\n";
        i--;
    }
}