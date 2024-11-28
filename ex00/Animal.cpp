#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    if (this->type.empty())
    {
        this->type = "Animal";
        std::cout << "ANIMAL < " << this->type << " > Constructor Called." << std::endl;
    }
    else
        std::cout << "ANIMAL < " << this->type << " > Constructor Called." << std::endl;
}

Animal::Animal(const Animal& other)
{

}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this)
}