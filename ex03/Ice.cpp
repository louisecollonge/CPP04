#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {}
Ice::Ice( const Ice& other ) : AMateria( other.type ) {}
Ice::~Ice() {}

Ice	&Ice::operator=( const Ice& other ) {
	(void)other;
	std::cerr << "Please use clone instead of = for materias" << std::endl;
	return *this;
}

AMateria*	Ice::clone() const { return new Ice(); }

void		Ice::use( ICharacter& target ) {
	std::cout << BLUE
			  << "* shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << RESET << std::endl;
}
