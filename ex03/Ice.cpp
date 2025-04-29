#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {}
Ice::Ice( const Ice& other ) : AMateria( other.type ) {}
Ice::~Ice() {}

Ice	&Ice::operator=( const Ice& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria*	Ice::clone() const { return new Ice(); }

void		Ice::use( ICharacter& target ) {
	std::cout << BLUE
			  << "Ice : * shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << RESET << std::endl;
}
