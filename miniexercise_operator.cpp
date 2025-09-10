#include <iostream>
#include <string>

int main(){
    // CALCULATOR:

    double x , y;
    
    int ans0;
    int ans1;

    std::cout << "Enter any two numbers" << std::endl;
    std::cin >> x >> y;
    std::cout << std::endl;

    std::cout << "Would you like to perform: " << std::endl;
    std::cout << "1. Arithmetic Operations or "<< std::endl; 
    std::cout << "2. Compare between value" << std::endl;
    std::cin >> ans0;

    if(ans0 == 1){
        system("cls");
        std::cout << "What operation would you like to perform from(1-5)?" << "\n";
        std::cout << "1. Addition" << "\n";
        std::cout << "2. Subtraction" << "\n";
        std::cout << "3. Multiplication" << "\n";
        std::cout << "4. Division" << "\n";
        std::cout << "5. Modulus" << "\n";

        std::cin >> ans1;
        std::cout << std::endl;
        std::cout << "Alright then, " << ans1 << " it is then" << std::endl;
        system("cls");

        if(ans1 == 1){
            std::cout << x << " + " << y << " = " << x + y << std::endl;
        }else if(ans1 == 2){
            std::cout << x << " - " << y << " = " << x - y << std::endl;
        }else if(ans1 == 3){
            std::cout << x << " x " << y << " = " << x * y << std::endl;
        }else if(ans1 == 4){
            while(ans1 == 4 && y == 0){
                system("cls");
                std::cout << "Please re-input two new values, with the second value being not 0" << std::endl;
                std::cin >> x >> y;
            }
            if( y != 0){
                std::cout << x << " / " << y << " = " << x / y << std::endl;
            }
        }else if(ans1 == 5){
            int a = static_cast<int> (x); // [int a = (int)x]this is what I would usually use to convert from one data type to another 
            int b = static_cast<int> (y);// [int b = (int)y] but the static_cast is a more modern and safe way to convert data types 
            std::cout << x << " % " << y << " = " << a % b << std::endl;
        }else{
            std::cout << "Please choose a number from the above options." << std::endl;
        }
        
    }else if(ans0 == 2){
        system("cls");
        // COMPARATOR:
        if(x == y){
            std::cout << x << " is equal to " << y << "\n";
        }
        if(x != y){
            std::cout << x << " is not equal to " << y << "\n";
        }
        if(x > y){
            std::cout << x << " is greater than " << y << "\n";
        }
        if(x < y){
            std::cout << x << " is less than " << y << "\n";
        }
        if(x >= y){
            if(x == y){
                std::cout << x << " is equal to " << y << "\n";
            }else if(x > y){
                std::cout << x << " is greater than " << y << "\n";
            }    
        }
        if(x <= y){
            if(x == y){
                std::cout << x << " is equal to " << y << "\n";
            }else if(x < y){
                std::cout << x << " is less than " << y << "\n";
            }
        }
    }

}