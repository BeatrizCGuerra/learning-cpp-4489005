// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahr = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahr - 32);

    std::cout << "celsius = " << celsius << std::endl;

    double weight = 10.99;
    std::cout << "Float = " << weight << std::endl;
    std::cout << "Integer = " << (int) weight << std::endl;
    std::cout << "Fractional part = " << (int) (( weight - (int) weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
