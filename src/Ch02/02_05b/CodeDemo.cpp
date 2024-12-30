// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678910;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = 'c';
    auto f = "hello";
    auto g = true;

    std::cout << "a =" << typeid(a).name() << std::endl;
    std::cout << "b =" << typeid(b).name() << std::endl;
    std::cout << "c =" << typeid(c).name() << std::endl;
    std::cout << "d =" << typeid(d).name() << std::endl;
    std::cout << "e =" << typeid(e).name() << " and f =" << typeid(f).name() << std::endl;
    std::cout << "g =" << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
