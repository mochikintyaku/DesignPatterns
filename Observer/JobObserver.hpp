#pragma once
#include "Character.hpp"
#include "Observer.hpp"

class JobObserver :
    public Observer<Character, Character::StateChange>
{
public:
    void update(Character const& character, Character::StateChange property) override;
};

