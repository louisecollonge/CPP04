#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource // I for interface. The virtual functions have to be defined by inheriting classes.
{
	public:
		IMateriaSource();
		IMateriaSource( const IMateriaSource& other );
		IMateriaSource	&operator=( const IMateriaSource& other );
		virtual ~IMateriaSource();

		virtual void		learnMateria( AMateria* m ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;
};

/* 
MteriaSource is the inheriting concrete class of IMateriaSource.
*/
