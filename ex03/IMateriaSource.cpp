#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {}
IMateriaSource::IMateriaSource( const IMateriaSource& other ) { (void)other; }
IMateriaSource&	IMateriaSource::operator=( const IMateriaSource& other ) {
	(void)other;
	return *this;
}
IMateriaSource::~IMateriaSource() {}

/* 
Interfaces' methods don't need to be defined, since they are defined by inheriting classes.
That's why the '=' doesn't do anything here.
I did them for the compilator's sake.
*/
