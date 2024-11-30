#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() 
{
    const Animal* i = new Cat();
    std::cout << std::endl;
    const Animal* j = new Dog();

    std::cout << std::endl;
    Dog *t = new Dog();
    std::cout << std::endl;
    Dog *h = new Dog();
    
    std::cout << std::endl;

    h->makeSound();
    
    std::cout << std::endl;

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "t print: " << std::endl;
    t->printIdeas();
    std::cout << std::endl;
    std::cout << "h print: " << std::endl;
    h->printIdeas();
    std::cout << std::endl;
    *t = *h;
    std::cout << std::endl;
    t->setIdea(2, "2222");
    std::cout << "t print: " << std::endl;
    t->printIdeas();
    std::cout << std::endl;
    std::cout << "h print: " << std::endl;
    h->printIdeas();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    i->makeSound();
    h->makeSound();
    t->makeSound();

    std::cout << std::endl;
    
    delete i;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete t;
    std::cout << std::endl;
    delete h;
    std::cout << std::endl;

    const WrongAnimal* a = new WrongAnimal(); 
    std::cout << std::endl;
    const WrongAnimal* b = new WrongCat();

    std::cout << std::endl;
    
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    
    std::cout << std::endl;

    a->makeSound();
    b->makeSound();
    
    std::cout << std::endl;
    
    delete a;
    std::cout << std::endl;
    delete b;

    return 0; 
}