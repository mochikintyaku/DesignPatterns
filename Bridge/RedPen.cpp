#include <iostream>
#include <windows.h>
#include "RedPen.h"

RedPen::RedPen()
{
}

RedPen::~RedPen()
{
}

void RedPen::write(std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	std::cout << str << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}