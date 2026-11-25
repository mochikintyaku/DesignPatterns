#pragma once
#include <memory>
class Person2
{
public:
	explicit Person2();
	~Person2();
	int getBirth() const;
private:
	struct Impl;
	std::unique_ptr<Impl> pImpl;
};

