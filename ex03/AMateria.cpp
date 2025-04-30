#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) { this->type = type; }
AMateria::AMateria( const AMateria& other ) { this->type = other.type; }
AMateria::~AMateria() {}

AMateria	&AMateria::operator=( const AMateria& other ) {
	(void)other;
	std::cerr << "Please use clone instead of = for materias" << std::endl;
	return *this;
}

std::string const &	AMateria::getType() const { return type; }
void				AMateria::use(ICharacter& target) { (void)target; }

/* 
The = overload is implemented here only to respect the canonical form for the subject,
but since AMateria is non instanciable, it actually cannot be called.
Also it doesn't make any sense to assign a type to another without changing the actual 
object.
*/
