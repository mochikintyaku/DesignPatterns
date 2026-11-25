#pragma once
#include <iostream>
#include <string>

struct Position
{
	// 将棋の表現では筋->段の順で表す  7六、8四とか

	int suji_; // 筋（縦）先手から見て一番右の縦列が1筋
	int dan_;  // 段（横）先手から見て一番上の横列が一段

	Position() = default;
	Position(int suji, int dan) : suji_(suji), dan_(dan) {};
};

static inline std::string toKanji(int num)
{
	static const char* kanji_num[] = { "", "一", "二", "三", "四", "五", "六", "七", "八", "九" };
	if (num >= 1 && num <= 9)
	{
		return kanji_num[num];
	}
	return "?";
}

static inline std::ostream& operator<<(std::ostream& os, const Position& pos)
{
	os << "(" << pos.suji_ << toKanji(pos.dan_) << ")";
	return os;
}