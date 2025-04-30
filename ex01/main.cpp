#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main() 
{
	// array test:
	std::cout << BOLD << "ARRAY :" << RESET << std::endl;
	int		n = 4;
	Animal*	array[n];

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

	// individuals test:
	std::cout << BOLD << "INDIVIDUALS :" << RESET << std::endl;
	const Animal*	j = new Cat();
	const Animal*	k = new Dog();
	const Animal*	meta = new Animal();

	Dog m;
	m.setIdea(0, "I love you sooo much!");
	m.setIdea(1, "I love the cat so much too!");
	Cat l;
	l.setIdea(0, "I'll kill you all!");

	std::cout << std::endl;

	std::cout << j->getType() << ":	" << std::flush;
	j->makeSound();
	std::cout << k->getType() << ":	" << std::flush;
	k->makeSound();
	std::cout << meta->getType() << ":	" << std::flush;
	meta->makeSound();
	std::cout << m.getType() << " has a few ideas:	*" 
			  << m.getIdea(0) << "* - *" << m.getIdea(1) 
			  << "* but says: " << std::flush;
	m.makeSound();
	std::cout << l.getType() << " has an idea:	*" 
			  << l.getIdea(0) 
			  << "* but says: " << std::flush;
	l.makeSound();
	
	std::cout << std::endl;
	delete j;
	delete k;
	delete meta;

	return 0;
}
