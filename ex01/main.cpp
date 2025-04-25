#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main() {
	int		n = 4;
	Animal*	array[n];

	const Animal*	j = new Cat();
	std::cout << std::endl;
	const Animal*	k = new Dog();
	std::cout << std::endl;
	const Animal*	meta = new Animal();
	std::cout << std::endl;

	for (int i = 0; i < n/2; ++i)
		array[i] = new Dog();
	for (int i = n/2; i < n; ++i)
		array[i] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < n; ++i) {
		std::cout << array[i]->getType() 
				  << " " 
				  << i 
				  << ":	" << std::flush;
		array[i]->makeSound();
	}

	std::cout << std::endl << j->getType() << ":	" << std::flush;
	j->makeSound();
	std::cout << k->getType() << ":	" << std::flush;
	k->makeSound();
	std::cout << meta->getType() << ":	" << std::flush;
	meta->makeSound();
	
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
		delete array[i];
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;
	delete meta;

	return 0;
}
