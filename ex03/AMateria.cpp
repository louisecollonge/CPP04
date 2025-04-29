#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) { this->type = type; }
AMateria::AMateria( const AMateria& other ) { this->type = other.type; }
AMateria::~AMateria() {}

AMateria	&AMateria::operator=( const AMateria& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string const &	AMateria::getType() const { return type; }
void				AMateria::use(ICharacter& target) { (void)target; }

/* 
The = overload is implemented here only to respect the canonical form for the subject,
but since AMateria is non instanciable, it actually cannot be called.
I decided to assign the type in it, but actually assigning only the type doesn't
do anything to the materia.
*/
