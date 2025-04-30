#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() 
{
	// Test with Animal, Cat and Dog:
	const Animal* meta = new Animal();
	const Animal* j = new Dog();	// const Animal bc we don't want Animal to be modifiable
	const Animal* i = new Cat();	// to modify the object, we'll have to use Cat/Dog
	{	
		std::cout << std::endl;

		std::cout << j->getType() << ":	" << std::flush;
		j->makeSound();
		std::cout << i->getType() << ":	" << std::flush;
		i->makeSound();
		std::cout << meta->getType() << ":	" << std::flush;
		meta->makeSound();

		std::cout << std::endl;
	}
	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;

	// Test with WrongAnimal and WrongCat:
	const	WrongAnimal* neo = new WrongAnimal();
	const	WrongAnimal* k = new WrongCat(); // instanciated through Animal will make it do the same sound as Animal
	WrongCat* l = new WrongCat();	// instanciated through WrongCat will make it do "meow"
	{
		std::cout << std::endl;

		std::cout << neo->getType() << ":	" << std::flush;
		neo->makeSound();
		std::cout << k->getType() << ":	" << std::flush;
		k->makeSound();
		std::cout << l->getType() << ":	" << std::flush;
		l->makeSound();

		std::cout << std::endl;
	}
	delete k;
	delete l;
	delete neo;

	return 0;
}
