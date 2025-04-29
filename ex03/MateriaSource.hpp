#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
		AMateria*	materias[4];

	public:
		MateriaSource();
		MateriaSource( const MateriaSource &other );
		MateriaSource	&operator=( const MateriaSource &other );
		virtual ~MateriaSource();

		virtual void		learnMateria( AMateria* m );
		virtual AMateria*	createMateria( std::string const &type);
};
