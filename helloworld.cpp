#include <iostream>
#include <string>
#include <vector>

std::string month = "October"; // My name

double weight = 78.1; // Current weight

int siblings = 6; // brothers and sisters

bool dark = true; // skin complexion

char toAge = '+';  // add to my age
// Namespace must always be declare outside of any function as it is a global operator and not intended
// to operate locally. But "using namespace <container name of the namepace>" can be used; this way
// there will be no need to use the "::" - scope resolution operator

namespace first{
    const double PI = 3.1415;
}

namespace second{
    const double PI = 3.141;
}
// Typedef and Using Keywords; Using is more modern and better for templates
// typedef std::vector<std::pair<std::string, int>> pairlist_t; //pairlist is now the nickname or alias
// for the very long vector data type.
using pairlist_t = std::vector<std::pair<std::string, int>>;

//typedef int num_t;
using num_t = int;

//typedef std::string words_t;
using words_t = std::string;

int main(){
    using namespace second;
    // Print to the console
    std::cout << "I Like Bread!" << '\n';
    std::cout << "It's really good" << '\n';

    std::cout << "My name is Ekene, I weigh about " << weight << "kg" << "\n";
    std::cout << "I have " << siblings << " siblings, of which 2 are girls and the rest are boys." <<"\n";
    std::cout << "I'm 22" << toAge << " old" << "\n";
    std::cout << "I'll be 23 years by " << month << "\n";
    if(dark == true){
    std::cout << "I'm dark in complexion" << "\n";
    }
    // To use 'const' it is ideal for the variable after to be in upper case.
    const double PI = 3.14159;
    double r; //radius of the circle.

    std::cout << "Enter the value of your circle's radius." << std::endl;
    std::cin >> r;
    double areaOfCircle = second::PI * (r * r);
    std::cout << "The are of the circle is " << areaOfCircle << std::endl;

    // Namespace - a namespace provides a solution for preventing name conflict especially within
    // large projects. Each entity need a unique name. A namespace allows for identically named 
    // entities provided their namespaces are different.
    // PS: even if we are to use a custom name space defined globally with a variable intiallized in it, once a variable is reintiallized in 
    // the local 'main function' scope the program will automatically pick the value of the renintiallized variable
    // and use that instead. So if we want to use the variable in the name space 
    areaOfCircle = PI * (r * r);
    std::cout << "The are of the circle is " << areaOfCircle << std::endl;

 
    areaOfCircle = first::PI * (r * r);
    std::cout << "The are of the circle is " << areaOfCircle << std::endl;

    // typedef - this is a reserved used to create an additional name (alias) for another data type
    // It can be said to be a new identifier for an existing type. Helps with readability and reduces 
    // typos. Only use it when there is a clear benefit. The typedef keyword is been replaced with 
    // 'using' keyword. PS: jsut a the name says it only acts as a new name for the data type, and does
    // not change it. Usually it is common practice for the nicknames given to the say data types have 
    // "_t" at the end.

    // std::vector<std::pair<std::string , int>> pairs; // instead of this.

    pairlist_t pairs; // we'll use this instead.

    int x = 3;

    num_t y = 5;

    std::string name = "Ekene";

    words_t surName = "Ginikachi";

    std::cout << "My name is "<< name << " " << surName <<'\n';
    std::cout << " 3 + 5 is " << x + y <<'\n'; 
    return 0;
}   