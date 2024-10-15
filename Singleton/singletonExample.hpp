#include <iostream>

class Singleton {
private:
    Singleton() {
        std::cout << "Singleton is created" << std::endl;
    }

    static Singleton* instance;
    int data = 24;

public:
    Singleton(const Singleton& other) = delete;
    Singleton(Singleton&& other) = delete;
    Singleton& operator=(const Singleton& other) = delete;
    Singleton& operator=(Singleton&& other) = delete;

    static Singleton* getInstance() {
        if(!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    static void printSomething() {
        std::cout << "Singleton is printing something" << std::endl;
    }

    static int getData() {
        return instance->data;
    }
};

Singleton* Singleton::instance = nullptr;