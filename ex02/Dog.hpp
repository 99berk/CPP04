#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound(void) const;
        std::string getIdeas(int i) const;
        void setIdea(int i, const std::string idea);
        void printIdeas(int i = 0) const;
};