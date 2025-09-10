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
    std::cout << std::endl;

    // Switch statement

    int day = 3;

    switch(day){
        case 1: std::cout << "Monday" << "\n"; break;
        case 2: std::cout << "Tuesday" << "\n"; break;
        case 3: std::cout << "Wednesday" << "\n"; break;
        default: std::cout << "Invalid day" << "\n"; break;
    }
    std::cout << std::endl;
    
    // LOOPS: For repeating tasks.

    // for loop: used when the number of times to repeat is known
    
    std::cout << "Play, in ";
    for(int i = 1; i < 4; i++){
        std::cout << i << std::endl;
    }
    std::cout << "ACTION!!!" << std::endl;
    std::cout << std::endl;

    // while loop: used when the number of times is not stated(runs until the condition becomes false) 

    int i = 5;

    while(i > 0){
        //system("cls");
        std::cout << i << "\n";
        i--;
    }
    std::cout << std::endl;

    // do-while loop: always runs at least once

    int n = 0;

    do{
        std::cout << "Runs once even if n = 0" << "\n";
    }while(n > 0);
}