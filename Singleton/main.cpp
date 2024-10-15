#include <iostream>
#include "singletonExample.hpp"

int main() {
    Singleton* singleton = Singleton::getInstance();
    Singleton::printSomething();
    std::cout << "Data: in Singleton" << Singleton::getData() << std::endl;
    return 0;
}