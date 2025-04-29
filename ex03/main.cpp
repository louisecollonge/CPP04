#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main() {
	IMateriaSource* src = new MateriaSource();	// creates an empty spell book
	src->learnMateria(new Ice());				// adds a new spell "Ice" to the book [dynamically]
	src->learnMateria(new Cure());				// adds a new spell "Cure" to the book [dynamically]

	ICharacter* Bimo = new Character("Bimo");	// creates a sorcerer [dynamically]

	AMateria* tmp1;
	tmp1 = src->createMateria("ice");			// the "Ice" materia is created thanks to the spell inside the book
	Bimo->equip(tmp1);							// the sorcerer is equiped with the "Ice" materia

	AMateria* tmp2;
	tmp2 = src->createMateria("cure");			// the "Cure" materia is created thanks to the spell inside the book
	Bimo->equip(tmp2);							// the sorcerer is equiped with the "Cure" materia

	ICharacter* Cocotte = new Character("Cocotte");	// creates another sorcerer [dynamically]

	Bimo->use(0, *Cocotte);	// the sorcerer uses his first materia on the other sorcerer
	Bimo->use(1, *Cocotte);	// the sorcerer uses his second materia on the other sorcerer
	Bimo->use(2, *Cocotte);	// won't do anything bc nothing is equiped in third place of inventory
	Bimo->use(3, *Cocotte);	// idem
	Bimo->use(4, *Cocotte);	// idem

	ICharacter* BouzoumBip = new Character("BouzoumBip");

	BouzoumBip->use(0, *Bimo);	// nothing is equiped so won't do anything
	Bimo->unequip(0);
	delete tmp1; // the memory is saved in tmp1 and not equiped anymore so we need to delete manually
	Bimo->use(0, *BouzoumBip); // won't do anything bc 0 isn't equiped anymore
	Bimo->use(1, *BouzoumBip); // still works

	AMateria* tmp3;
	tmp3 = src->createMateria("random");	// this materia doesn't exist so this won't do anything
	BouzoumBip->equip(tmp3);				// nothing is equiped
	BouzoumBip->use(0, *Bimo);				// does nothing

	AMateria* tmp4;
	tmp4 = src->createMateria("ice");
	Cocotte->equip(tmp4);
	Cocotte->use(0, *Bimo);

	delete BouzoumBip;
	delete Cocotte;
	delete Bimo;
	delete src;

	return 0;
}

/* 

~ Game explanation: ~

o	A AMateria is like a magic spell. The class is abstract bc a spell doesn't 
	exist on its own.
o	The Character is like a sorcerer that can be equiped with materias and use them.
o	The MateriaSource is like a spell book than can "learn" new models of AMateria 
	through learnMateria() and generate new instances through createMateria(type).


~ Interface concept explanation ~

o	It is a class that only contains purely virtual functions. 
o	It cannot be instanciated. 
o	It imposes to every inheriting class to implement all of its virtual functions.


~ For example: ~

	class IPizza {
		virtual void	makeDough() {} = 0;
		virtual void	garnish() {} = 0;
		virtual void	cook(){} = 0;
	}
	class 4formages : public IPizza {
		virtual void	makeDough() {...};
		virtual void	garnish() {...};
		virtual void	cook(){...};
	}
Making a pizza requires all of the functions of the IPizza interface.

*/
