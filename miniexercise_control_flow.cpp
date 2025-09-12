#include <iostream>
#include <string>

int main(){

    // PHASE 1:

    // To check if a number is positive, negative or zero.

    double num;

    std::cout << "Please enter any number(be negative or positive)" << std::endl;
    std::cin >> num;
   
    if(num > 0){
        std::cout << "The number you entered is positive." << std::endl; 
    }else if(num <= -1){
        std::cout << "The number you entered is negative." << std::endl;
    }else if(num == 0){
        std::cout << "The number you entered is zero." << std::endl;
    }else{
        std::cout << "Please enter a valid number." << std::endl;
    }
    std::cout << std::endl;

    // PHASE 2:

    // Number representing days of the week.

    int week;

    std::cout << "Please enter a number between 1-7(which will represent your favourite day of the week.)" << std::endl;
    std::cin >> week;

    while(week > 7 || week < 1){
        std::cout << "The number should range from 1-7. Re-enter the number" << std::endl;
        std::cin >> week;
    }

    switch(week){
        case 1: std::cout << "Your favourite day of the week is Sunday." << std::endl; break;
        case 2: std::cout << "Your favourite day of the week is Monday." << std::endl; break;
        case 3: std::cout << "Your favourite day of the week is Tuesday." << std::endl; break;
        case 4: std::cout << "Your favourite day of the week is Wednesday." << std::endl; break;
        case 5: std::cout << "Your favourite day of the week is Thursday." << std::endl; break;
        case 6: std::cout << "Your favourite day of the week is Friday." << std::endl; break;
        case 7: std::cout << "Your favourite day of the week is Saturday." << std::endl; break;
    }
    std::cout << std::endl;

    // PHASE 3:

    // Printing the numbers 1 - 10 using a loop.

    // Will be using a for loop

    std::string ans;

    std::cout << "Would you like to see me count from 1 to 10?" << std::endl;
    std::cin >> ans;

    if(ans == "Yes" || ans == "yes"){
        for(int i = 0; i < 11; i++){
            std::cout << i << "\n";
        }
    }else{
        std::cout << "Okay, thank you for your time. Maybe another time, have a nice day." << std::endl;
    }
}