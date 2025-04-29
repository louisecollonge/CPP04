#include "Dog.hpp"

Dog::Dog() {
	brain = new Brain();
	type = "Dog";
	std::cout << BLUE
			  << "Dog	constructor called."
			  << RESET << std::endl;
}

Dog::Dog( const Dog& other ) {
	brain = new Brain(*other.brain); // deep copy by using new object Brain
	type = other.type;
	std::cout << BLUE
			  << "Dog	copy constructor called."
			  << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << BLUE
			  << "Dog	destructor called."
			  << RESET << std::endl;
	delete brain;
}

Dog	&Dog::operator=( const Dog& other ) {
	if (this != &other) {
		delete brain;
		brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << BLUE 
			  << "<< Woof woof !	>>" 
			  << RESET << std::endl;
}
