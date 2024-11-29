#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "CAT " << this->type << " Default Constructor Called." << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy Constructor Called." << std::endl; 
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "CAT " << this->type << " Destructor Called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat: Meeeeavvv." << std::endl;
}
