#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    if (this->type.empty())
    {
        this->type = "Animal";
        std::cout << "ANIMAL " << this->type << " Default Constructor Called." << std::endl;
    }
    else
        std::cout << "ANIMAL " << this->type << " Default Constructor Called." << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy Constructor Called." << std::endl; 
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Animal::Animal(const std::string type)
{
    this->type = type;
    std::cout << "ANIMAL " << this->type << " Constructor Called." << std::endl;
}

Animal::~Animal()
{
    if (this->type.empty())
        std::cout << "ANIMAL Default Destructor Called." << std::endl;
    else
        std::cout << "ANIMAL " << this->type << " Destructor Called." << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Whatsoever Animal Sound." << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}