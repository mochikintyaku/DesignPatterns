#pragma once
#include <memory>
#include <string>
class Person3
{
public:
	explicit Person3();
	~Person3();
	int getBirth() const;
private:
	std::string forename;
	std::string surname;
	int year_of_birth;

	struct Impl;
	std::unique_ptr<Impl> pImpl;
};

