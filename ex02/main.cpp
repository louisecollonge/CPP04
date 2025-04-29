#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main() 
{
	// array:
	std::cout << BOLD << "ARRAY :" << RESET << std::endl;
	int		n = 4;
	AAnimal*	array[n];

	for (int i = 0; i < n/2; ++i)
		array[i] = new Dog();
	for (int i = n/2; i < n; ++i)
		array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < n; ++i) {
		std::cout << array[i]->getType() 
				  << " [" 
				  << i 
				  << "] :	" << std::flush;
		array[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
		delete array[i];
	std::cout << std::endl;

	// individuals:
	std::cout << BOLD << "INDIVIDUALS :" << RESET << std::endl;
	const AAnimal*	j = new Cat();
	const AAnimal*	k = new Dog();
	std::cout << std::endl;

	std::cout << j->getType() << ":	" << std::flush;
	j->makeSound();
	std::cout << k->getType() << ":	" << std::flush;
	k->makeSound();
	
	std::cout << std::endl;
	delete j;
	delete k;

	return 0;
}
