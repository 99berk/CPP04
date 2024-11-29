#pragma once

#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        Animal(const std::string type);
        virtual ~Animal();
        
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};