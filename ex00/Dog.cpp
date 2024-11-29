#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "DOG " << this->type << " Default Constructor Called." << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy Constructor Called." << std::endl; 
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "DOG " << this->type << " Destructor Called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog: Woof." << std::endl;
}
