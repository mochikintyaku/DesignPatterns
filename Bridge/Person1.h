#pragma once
#include <string>
class Person1
{
private:
	std::string forename;
	std::string surname;
	std::string address;
	std::string city;
	std::string country;
	std::string zip;
	int year_of_birth;
public:
	Person1();
	int getBirth() const;
};

