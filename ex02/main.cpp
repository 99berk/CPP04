#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() 
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    i->makeSound();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();

    delete i;
    delete j;

    return 0; 
}