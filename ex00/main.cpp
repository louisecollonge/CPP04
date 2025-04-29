#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() 
{
	// Test with Animal, Cat and Dog:
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
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
	const	WrongAnimal* k = new WrongCat();
	{
		std::cout << std::endl;

		std::cout << k->getType() << ":	" << std::flush;
		k->makeSound();
		std::cout << neo->getType() << ":	" << std::flush;
		neo->makeSound();

		std::cout << std::endl;
	}
	delete neo;
	delete k;

	return 0;
}
