#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = "Idea";
    
    std::cout << "Brain Default Constructor Called." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy Constructor Called." << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Copy Assigment Operator Called." << std::endl;
    if(this != &other)
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called." << std::endl;
}