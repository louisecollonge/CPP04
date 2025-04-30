#include "Brain.hpp"

Brain::Brain() {
	std::cout << PINK
			  << "Brain	constructor called."
			  << RESET << std::endl;
}

Brain::Brain( const Brain& other ) {
	for (unsigned long i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	std::cout << PINK
			  << "Brain	copy constructor called."
			  << RESET << std::endl;
}

Brain::~Brain(){
	std::cout << PINK
			<< "Brain	destructor called."
			<< RESET << std::endl;
}

Brain	&Brain::operator=( const Brain& other )
{
	if (this != &other) {
		for (unsigned long i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	} else {
		std::cerr << "[" << index 
				  << "] is a wrong index: cannot set idea in brain" 
				  << std::endl;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return ideas[index];
	std::cerr << "[" << index
			  << "] is a wrong index: cannot get idea from brain"
			  << std::endl;
	return "";
}
