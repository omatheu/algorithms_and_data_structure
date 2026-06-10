#include <iostream>
#include <stdlib.h>
#include <typeinfo>

class Animal {
    virtual void sound() {};
};

class Dog : public Animal {};


int main() {
    Animal* pet = new Dog();

    std::cout << "The type of object is: " << typeid(pet).name() << std::endl;

    delete pet;
    return 0;
}