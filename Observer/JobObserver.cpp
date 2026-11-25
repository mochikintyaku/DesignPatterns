#include <iostream>
#include "JobObserver.hpp"

void JobObserver::update(Character const& character, Character::StateChange property)
{
	if (property == Character::StateChange::JobChanged)
	{
		std::cout << "JobObserver: Character's job has changed from " << to_string(character.getPrevJob()) << " to " << to_string(character.getJob()) << std::endl;
	}
}