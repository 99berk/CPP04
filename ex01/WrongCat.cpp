#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WRONGCAT " << this->type << " Default Constructor Called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat Copy Constructor Called." << std::endl; 
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)   
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WRONGCAT " << this->type << " Destructor Called." << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: Meeeeavvv." << std::endl;
}