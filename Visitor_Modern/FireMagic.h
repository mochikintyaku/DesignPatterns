#pragma once
#include "Magic.h"
#include <iostream>

namespace visitor
{
	struct FireMagic
	{
		void operator()(const BeginnerMagic& bm) const
		{
			std::cout << "火の初級魔法：\"マッチ\"  ほんのり暖かいぜ" << std::endl;
		}

		void operator()(const IntermediateMagic& im) const
		{
			std::cout << "火の中級魔法：\"キャンプファイア\"  冷える夜にはこいつだぜ" << std::endl;
		}

		void operator()(const AdvancedMagic& am) const
		{
			std::cout << "火の上級魔法：\"エクスプロージョン\"  芸術は爆発だ" << std::endl;
		}
	};
}
