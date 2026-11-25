#include "FireMagic.h"
#include "BeginnerMagic.h"
#include "IntermediateMagic.h"
#include "AdvancedMagic.h"
#include <iostream>

namespace visitor
{
	FireMagic::FireMagic()
		: MagicRankVisitor()
	{

	}

	FireMagic::~FireMagic()
	{

	}

	void FireMagic::visit(const BeginnerMagic& bm) const
	{
		std::cout << "火の初級魔法：\"マッチ\"  ほんのり暖かいぜ" << std::endl;
	}

	void FireMagic::visit(const IntermediateMagic& im) const
	{
		std::cout << "火の中級魔法：\"キャンプファイア\"  冷える夜にはこいつだぜ" << std::endl;
	}

	void FireMagic::visit(const AdvancedMagic& am) const
	{
		std::cout << "火の上級魔法：\"エクスプロージョン\"  芸術は爆発だ" << std::endl;
	}
}