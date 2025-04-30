#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << ORANGE
			  << "Cat	constructor called."
			  << RESET << std::endl;
	brain = new Brain();
}

Cat::Cat( const Cat& other ) {
	type = other.type;
	std::cout << ORANGE
			  << "Cat	copy constructor called."
			  << RESET << std::endl;
	brain = new Brain(*other.brain); // deep copy by using new object Brain
}

Cat::~Cat() {
	delete brain;
	std::cout << ORANGE
			  << "Cat	destructor called."
			  << RESET << std::endl;
}

Cat	&Cat::operator=( const Cat& other ) {
	if (this != &other) {
		delete brain;
		brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << ORANGE 
			  << "<< Meeeoooow...	>>" 
			  << RESET << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) { brain->setIdea(index, idea); }

std::string Cat::getIdea(int index) const { return brain->getIdea(index); }
