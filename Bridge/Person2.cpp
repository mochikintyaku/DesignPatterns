#include "Person2.h"
#include "utils.inl"
#include <string>

extern int MIN_BIRTH_YEAR;
extern int MAX_BIRTH_YEAR;

struct Person2::Impl
{
	std::string forename;
	std::string surname;
	std::string address;
	std::string city;
	std::string country;
	std::string zip;
	int year_of_birth;

	Impl() :year_of_birth(getRandomValue(MIN_BIRTH_YEAR, MAX_BIRTH_YEAR)) {}
};

Person2::Person2() : pImpl(std::make_unique<Impl>())
{
}

Person2::~Person2() = default;

int Person2::getBirth() const
{
	return pImpl->year_of_birth;
}