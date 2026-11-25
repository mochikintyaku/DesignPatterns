#include <iostream>
#include "NameObserver.hpp"

void NameObserver::update(Character const& character, Character::StateChange property)
{
	if (property == Character::StateChange::NameChanged)
	{
		std::cout << "NameObserver: Character's name has changed from " << character.getOldName() << " to " << character.getName() << std::endl;
	}
}