#pragma once
#include <random>

static inline int getRandomValue(int min_value, int max_value)
{
	static std::random_device rd;
	static std::mt19937 gen(rd());
	static std::uniform_int_distribution<> dist(min_value, max_value);

	return dist(gen);
}