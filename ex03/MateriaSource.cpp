#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other ) {
	for (int i = 0; i < 4; ++i) {
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone(); // here taking one box of the materia[] array, which is a AMateria object, so we can use .clone() on it
		else
			this->materias[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &other ) {
	if (this != &other) {
		for (int i = 0; i < 4; ++i) {
			if (materias[i])
				delete materias[i];
			if (other.materias[i])
				materias[i] = other.materias[i]->clone();
			else
				materias[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete materias[i];
		materias[i] = NULL;
	}
}

void	MateriaSource::learnMateria( AMateria* m ) {
	if (m) {
		for (int i = 0; i < 4; ++i) {
			if (!materias[i]) {
				materias[i] = m; // shallow copy: stores the m pointer in the array
				break;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const &type) {
	for (int i = 0; i < 4; ++i) {
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone(); // deep copy: creates a new independant object
	}
	return 0; // = return NULL
}
