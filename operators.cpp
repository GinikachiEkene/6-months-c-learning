// OPERATORS
// Operators are symbols that tell the complier to perform certain actions on a variable or values.
// Operators are the actions that are performed on variables. 
 namespace var{
    int a;
    int b;
    int x;
 }


#include <iostream>

int main(){

    // ARITHMETIC OPERATORS: Used in Maths.

    int a = 10, b = 3;

    std::cout << "a + b = " << a + b << "\n"; // 13
    std::cout << "a - b = " << a - b << "\n"; // 7
    std::cout << "a * b = " << a * b << "\n"; // 30
    std::cout << "a / b = " << a / b << "\n"; // 3.3333 or just 3 (integer division)
    std::cout << "a % b = " << a % b << "\n"; // 1 ( modulus = remainder)

    // Note: "/" divison behaves differently for integers and floats
    // (int division) 10 / 3 = 3
    // (float division) 10.0 / 3.0 = 3.33333.....
    std::cout << std::endl;
    std::cout << std::endl;


    // RELATIONAL OPERATORS: Used to compare value (results are true/false i.e 1 or 0).

    int x = 5, y = 10;

    std::cout << (x == y) << std::endl; // (false) 0
    std::cout << (x != y) << std::endl; // (true) 1
    std::cout << (x > y) << std::endl; // (false) 0
    std::cout << (x < y) << std::endl; // (true) 1
    std::cout << (y <= 10) << std::endl; // (true) 1
    std::cout << (x >= 5) << std::endl; // (true) 1
    std::cout << std::endl;
    std::cout << std::endl;

    
    // LOGICAL OPERATORS: Used with conditions.

    bool q = true, p = false;

    std::cout << (p && q) << std::endl; // (AND)
    std::cout << (p || q) << std::endl; // (OR)
    std::cout << (!p) << std::endl; // (NOT)
    std::cout << (!q) << std::endl; // (NOT)
    std::cout << std::endl;
    std::cout << std::endl;


    // BITWISE OPERATORS: Works directly on bits (Binary Representation).
    // This is important for microprocessor-level programming.

    var::a = 6; // 0110 in binary 
    var::b = 3; // 0011 in binary
    int c = 4; // 0100 in binary

    // The binary of the vairables are compared, by using the truth table to get their output and 
    // display it in decimals.

    std::cout << (var::a & var::b) << std::endl; // 2 in binary 0010 (AND)
    std::cout << (var::a & var::b & c) << std::endl; // 0 in binary 0000 (AND)
    std::cout << std::endl;

    std::cout << (var::a | var::b) << std::endl; // 7 in binary 0111 (OR)
    std::cout << (var::a | var::b | c) << std::endl; // 7 in binary 0111 (OR)
    std::cout << std::endl;

    std::cout << (var::a ^ var::b) << std::endl; // 5 in binary 0101 (XOR)
    std::cout << (var::a ^ var::b ^ c) << std::endl; // 1 in binary 0001 (XOR)
    std::cout << std::endl;

    std::cout << (~var::a) << std::endl; // -7 bitwise NOT (invert all the bits) (-0111)
    std::cout << (~var::b) << std::endl; // -4 bitwise NOT (-0100)
    std::cout << (~c) << std::endl; // -5 bitwise NOT (-0101)
    // what the bitwise NOT does is to negates the value of the output while adding 1 to it. So 6 NOT will be -7
    // Flips all bits (including the sign bit).
    // In C++, integers are stored in two’s complement, so ~a = -(a+1)
    // a =  0000...0110   (6)
    // ~a = 1111...1001   (-7)

    std::cout << std::endl;

    std::cout << (var::a << 1) << std::endl; // 12 -> left shift by 1(0110 -> 1100)
    std::cout << (var::b << 2) << std::endl; // 12 -> left shift by 2(0011 -> 1100)
    std::cout << (c << 3) << std::endl; // 32 -> left shift by 3(0100 -> 100000) shifted 0100 3 times to the left
    // the left shift operator (<<) shifts the bits of a number to the left by the given number of positions.
    // each left shift by 1 is the same as multiplying the number by 2 with the position being the power of 2.
    // so:  x << n = x * (2^n)
    std::cout << std::endl;

    std::cout << (var::a >> 1) << std::endl; // 3 -> right shift by 1(0110 -> 0011)
    std::cout << (var::b >> 3) << std::endl; // 0 -> right shift by 2(0011 -> 0000)
    std::cout << (c >> 2) << std::endl; // 1 -> right shift by 2(0100 -> 0001)
    // the right shift operator (>>) shifts the bits of a number to the right by the given number of positions.
    // each right shift by 1 is the same as dividing the number by 2 with the postion being the power of 2.
    // so: x >> n = x / (2^n)
    std::cout << std::endl;
    std::cout << std::endl;


    // ASSIGNMENT OPERATORS: Used to update values

    int n = 10;

    n += 1; // n = n + 1 -> 11
    std::cout << n << std::endl;
    n -= 2; // n = n - 2 -> 9
    std::cout << n << std::endl;
    n *= 3; // n = n * 3 -> 27
    std::cout << n << std::endl;
    n /= 4; // n = n / 4 -> 6(supposed to be 6.75, but since we are dealing with an integer variable type it will be 6)
    std::cout << n << std::endl;
    n %= 5; // n = n / 5 -> 1(being the reminder)
    std::cout << n << std::endl;
    // note for each of the operations that is performed on "n" here changes the value of n


    // INCREMENT & DECREMENT OPERATORS: shortcut to +1 & -1

    var::x = 5;
 
    // Increment:
    std::cout << var::x++ << std::endl; // prints 5 then 5 becomes 6
    std::cout << ++var::x << std::endl; // increases first 7 (x = 7), then prints 7

    // Decrement:
    std::cout << var::x-- << std::endl; // prints 7 then becomes 6
    std::cout << --var::x << std::endl; // decreases first to 5 (x = 5), then prints 5

    // How it works:
    // post increment(X++) or decrement(x--): (uses first, then increments or decrements)
    // pre increment(++x) or decrement(--x): (increments or decrements first then use)
}
    