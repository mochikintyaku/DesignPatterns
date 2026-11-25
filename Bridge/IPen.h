#pragma once
#include <string>

class IPen
{
public:
	~IPen() {};
	virtual void write(std::string str) = 0;
};
