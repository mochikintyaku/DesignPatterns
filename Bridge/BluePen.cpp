#include <iostream>
#include <windows.h>
#include <string>
#include "BluePen.h"

BluePen::BluePen()
{
}

BluePen::~BluePen()
{
}

void BluePen::write(std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	std::cout << str << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}