 // Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;

    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9};

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age length = " << AGE_LENGTH << std::endl;
    std::cout << "Age [0] = " << age[0] << std::endl;
    std::cout << "Temperature [0] = " << temperature[0] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
