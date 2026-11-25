#include "IntermediateMagic.h"
#include "FireMagic.h"
#include "WaterMagic.h"
#include "WindMagic.h"
#include "EarthMagic.h"
#include <iostream>

namespace visitor
{
	IntermediateMagic::IntermediateMagic()
		: MagicVisitor()
	{

	}

	IntermediateMagic::~IntermediateMagic()
	{

	}

	void IntermediateMagic::visit(const FireMagic& fm) const
	{
		std::cout << "火の中級魔法:\"キャンプファイア\"  冷える夜にはこいつだぜ" << std::endl;
	}

	void IntermediateMagic::visit(const WaterMagic& wm) const
	{
		std::cout << "水の中級魔法：\"プール\"  泳ぐと気持ちいいぜ" << std::endl;
	}

	void IntermediateMagic::visit(const WindMagic& wm) const
	{
		std::cout << "風の中級魔法：\"鎌鼬\"  見えない刃に気をつけな☆" << std::endl;
	}

	void IntermediateMagic::visit(const EarthMagic& em) const
	{
		std::cout << "土の中級魔法：\"落とし穴\"  どこにあるか分かるかな？" << std::endl;
	}
}