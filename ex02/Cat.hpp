#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat(void);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound(void) const;
        std::string getIdeas(int i) const;
        void setIdea(int i, const std::string idea);
        void printIdeas(int i = 0);
};
