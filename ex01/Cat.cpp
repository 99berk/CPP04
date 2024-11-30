#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "CAT " << this->type << " Default Constructor Called." << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy Constructor Called." << std::endl; 
    this->_brain = new Brain();
    *this->_brain = *other._brain;
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy Assigment Operator Called." << std::endl;
    if(this != &other)
    {
        this->type = other.type;
        *this->_brain = *other._brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "CAT " << this->type << " Destructor Called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat: Meeeeavvv." << std::endl;
}

std::string Cat::getIdeas(int i) const
{
    if (i >= 0 && i < 100)
        return (this->_brain->ideas[i]);
    return ("Error: Invalid Size\n");
}

void Cat::setIdea(int i, const std::string idea)
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return;
    }
    this->_brain->ideas[i] = idea;
}

void Cat::printIdeas(int num) const
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
