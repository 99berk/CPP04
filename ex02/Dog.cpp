#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "DOG " << this->type << " Default Constructor Called." << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy Constructor Called." << std::endl; 
    this->_brain = new Brain();
    *this->_brain = *other._brain;
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        this->type = other.type;
        *this->_brain = *other._brain;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "DOG " << this->type << " Destructor Called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog: Woof." << std::endl;
}

std::string Dog::getIdeas(int i)  const
{
    if (i >= 0 && i < 100)
        return (this->_brain->ideas[i]);
    return ("Error: Invalid Size.\n");
}

void Dog::setIdea(int i, const std::string idea)
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return;
    }
    this->_brain->ideas[i] = idea;
}

void Dog::printIdeas(int num) const
{
    for (int i = 0; i < 5; i++)
        std::cout << "Idea " << i + 1 << " " << this->getIdeas(i) << std::endl;
    if (num != 0)
    {
        std::cout << ".\n.\n." << std::endl;
        for (int i = num - 1; i <= num + 1; i++)
            std::cout << "Idea " << i + 1 << " " << this->getIdeas(i) << std::endl;    
    }
    std::cout << ".\n.\n." << std::endl;
    for (int i = 98; i < 100; i++)
        std::cout << "Idea " << i + 1 << " " << this->getIdeas(i) << std::endl;
}
