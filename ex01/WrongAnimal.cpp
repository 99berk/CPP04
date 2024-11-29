#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
    if (this->type.empty())
    {
        this->type = "WrongAnimal";
        std::cout << "WRONGANİMAL " << this->type << " Default Constructor Called." << std::endl;
    }
    else
        std::cout << "WRONGANİMAL " << this->type << " Default Constructor Called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Constructor Called." << std::endl; 
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const std::string type)
{
    this->type = type;
    std::cout << "WRONGANİMAL " << this->type << " Constructor Called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    if (this->type.empty())
        std::cout << "WRONGANİMAL Default Destructor Called." << std::endl;
    else
        std::cout << "WRONGANİMAL " << this->type << " Destructor Called." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound." << std::endl;
}
