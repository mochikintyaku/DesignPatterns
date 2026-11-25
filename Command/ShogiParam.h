#pragma once
#include <string>

enum PieceType
{
	Fu = 0,
	Kyo,
	Keima,
	Gin,
	Kin,
	Kaku,
	Hisya,
	Ou
};

static inline std::string toKanji(PieceType piece)
{
	static const char* kanji_piece[] = { "•à", "", "Œj", "‹â", "‹à", "Šp", "”ò", "‰¤" };
	if (piece >= PieceType::Fu && piece <= PieceType::Ou)
	{
		return kanji_piece[piece];
	}
	return "?";
}