#include <iostream>
#include "HPObserver.hpp"

void HPObserver::update(Character const& character, Character::StateChange property)
{
	if (property == Character::StateChange::HealthPointsChanged)
	{
		std::cout << "HPObserver: Character's HP has changed from " << character.getPrevHealthPoints() << " to " << character.getHealthPoints() << std::endl;
	}
}