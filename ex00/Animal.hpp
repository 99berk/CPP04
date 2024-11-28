#pragma once

#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const std::string type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        ~Animal();
        
        virtual void makeSound(void) const;
};