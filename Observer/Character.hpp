#pragma once
#include <string>
#include <set>
#include "Observer.hpp"

enum class JobType
{
	Warrior,
	Mage,
	Cleric,
};

inline const char* to_string(JobType job)
{
	switch (job)
	{
	case JobType::Warrior:
		return "Warrior";
	case JobType::Mage:
		return "Mage";
	case JobType::Cleric:
		return "Cleric";
	default:
		return "Unknown";
	}
}

class Character
{
public:
	enum class StateChange
	{
		NameChanged,
		HealthPointsChanged,
		JobChanged
	};

	using CharacterObserver = Observer<Character, StateChange>;

	Character(const std::string& name, int healthPoints, JobType job);
	~Character() = default;
	bool attach(CharacterObserver* observer);
	bool detach(CharacterObserver* observer);
	void notify(StateChange property);
	void setName(const std::string& name);
	void setHealthPoints(int healthPoints);
	void setJob(JobType job);
	const std::string& getName() const {return _name; }
	const int getHealthPoints() const {return _healthPoints; }
	const JobType getJob() const {return _job; }
	const std::string& getOldName() const { return _oldName; }
	const int getPrevHealthPoints() const { return _prevHealthPoints; }
	const JobType getPrevJob() const { return _prevJob; }

private:
	std::string _name;
	std::string _oldName;
	int _healthPoints;
	int _prevHealthPoints;
	JobType _job;
	JobType _prevJob;
	std::set<CharacterObserver*> _observers;
};