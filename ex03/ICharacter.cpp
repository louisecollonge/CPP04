#include "ICharacter.hpp"

ICharacter::ICharacter() {}
ICharacter::ICharacter( const ICharacter& other ) { (void)other; }
ICharacter&	ICharacter::operator=( const ICharacter& other ) {
	(void)other;
	return *this;
}
ICharacter::~ICharacter() {}

/* 
Interfaces' methods don't need to be defined, since they are defined by inheriting classes.
That's why the '=' doesn't do anything here.
I did them for the compilator's sake.
*/
