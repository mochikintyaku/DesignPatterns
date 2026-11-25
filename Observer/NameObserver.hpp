#pragma once
#include "Character.hpp"
#include "Observer.hpp"

class NameObserver :
    public Observer<Character, Character::StateChange>
{
public:
    void update(Character const& character, Character::StateChange property) override;
};

