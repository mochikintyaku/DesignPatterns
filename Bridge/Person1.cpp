#include "Person1.h"
#include "utils.inl"

extern int MIN_BIRTH_YEAR;
extern int MAX_BIRTH_YEAR;

Person1::Person1()
	: year_of_birth(getRandomValue(MIN_BIRTH_YEAR, MAX_BIRTH_YEAR))
{
}

int Person1::getBirth() const
{
	return year_of_birth;
}