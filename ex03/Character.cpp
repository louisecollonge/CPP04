#include "Character.hpp"

Character::Character( std::string const & name ) {
	this->name = name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character( const Character& other ) {
	this->name = other.name;
	for (int i = 0; i < 4; ++i) {
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

Character&	Character::operator=( const Character& other ) {
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; ++i) {
			if (inventory[i])
				delete inventory[i];
			inventory[i] = NULL;
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &	Character::getName() const { return name; }

void	Character::equip( AMateria* m ) {
	if (m) {
		for (int i = 0; i < 4; ++i) {
			if (!inventory[i]) {
				inventory[i] = m;
				break;
			}
		}
	}
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx <= 3)
		inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx <= 3 && inventory[idx]) 
		inventory[idx]->use(target);
}
