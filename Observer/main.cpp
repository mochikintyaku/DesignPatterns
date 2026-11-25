#include <iostream>
#include "Character.hpp"
#include "NameObserver.hpp"
#include "HPObserver.hpp"
#include "JobObserver.hpp"

int main()
{
	NameObserver nameObserver;
	HPObserver hpObserver;
	JobObserver jobObserver;

	Character player1("Player1", 110, JobType::Warrior);
	Character player2("Player2", 75, JobType::Mage);
	//Character player3("Player3", 80, JobType::Cleric);


	// Attach observers to the character
	player1.attach(&nameObserver);
	player1.attach(&hpObserver);
	player1.attach(&jobObserver);
	player2.attach(&nameObserver);  // player2 only has nameObserver attached

	player1.setName("Hogemaru");
	player1.setHealthPoints(104);
	player1.setJob(JobType::Mage);

	std::string tmpName;
	std::cout << "Enter a new name for player2: ";
	std::cin >> tmpName;

	player2.setName(tmpName);
	player2.setHealthPoints(33);
	player2.setJob(JobType::Cleric);

	

	return 0;
}