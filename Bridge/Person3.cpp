#include "Person3.h"
#include "utils.inl"

#include <string>

extern int MIN_BIRTH_YEAR;
extern int MAX_BIRTH_YEAR;

struct Person3::Impl
{
	std::string address;
	std::string city;
	std::string country;
	std::string zip;
};

Person3::Person3()
	: year_of_birth(getRandomValue(MIN_BIRTH_YEAR, MAX_BIRTH_YEAR)),
	  pImpl(std::make_unique<Impl>())
{
}

Person3::~Person3() = default;

int Person3::getBirth() const
{
	return year_of_birth;
}