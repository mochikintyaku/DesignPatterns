#include "Character.hpp"

Character::Character(const std::string& name, int healthPoints, JobType job)
	:_name(name), _healthPoints(healthPoints), _job(job)
{
}

// Character::~Character() == default;

bool Character::attach(CharacterObserver* observer)
{
	auto [pos, success] = _observers.insert(observer);
	return success;
}

bool Character::detach(CharacterObserver* observer)
{
	return (_observers.erase(observer) > 0U);
}

void Character::notify(StateChange property)
{
	for (auto iter = begin(_observers); iter != end(_observers);)
	{
		auto const pos = iter++;
		(*pos)->update(*this, property);
	}
}

void Character::setName(const std::string& name)
{
	_oldName = _name;
	_name = name;
	notify(StateChange::NameChanged);
	return;
}

void Character::setHealthPoints(const int healthPoints)
{
	_prevHealthPoints = _healthPoints;
	_healthPoints = healthPoints;
	notify(StateChange::HealthPointsChanged);
	return;
}

void Character::setJob(const JobType job)
{
	_prevJob = _job;
	_job = job;
	notify(StateChange::JobChanged);
	return;
}