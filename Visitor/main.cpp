// このプロジェクトの設計では、
// 魔法の属性（型）がクローズドセットで
// 魔法のランクがオープンセット

#include "FireMagic.h"
#include "WaterMagic.h"
#include "WindMagic.h"
#include "EarthMagic.h"
#include "BeginnerMagic.h"
#include "IntermediateMagic.h"
#include "AdvancedMagic.h"
#include <memory>
#include <iostream>

void castBeginnerMagic(const std::unique_ptr<visitor::Magic> magic)
{
	magic->accept(visitor::BeginnerMagic());
}

void castIntermediateMagic(const std::unique_ptr<visitor::Magic> magic)
{
	magic->accept(visitor::IntermediateMagic());
}

void castAdvancedMagic(const std::unique_ptr<visitor::Magic> magic)
{
	magic->accept(visitor::AdvancedMagic());
}

void castMagic(const std::unique_ptr<visitor::Magic> magic, const std::unique_ptr<visitor::MagicVisitor> mv)
{
	magic->accept(*mv);
}

int main()
{
	using namespace visitor;

	// 初級魔法
	std::cout << "<初級魔法>" << std::endl;
	castBeginnerMagic(std::make_unique<FireMagic>());
	castBeginnerMagic(std::make_unique<WaterMagic>());
	castBeginnerMagic(std::make_unique<WindMagic>());
	castBeginnerMagic(std::make_unique<EarthMagic>());

	// 中級魔法
	std::cout << "<中級魔法>" << std::endl;
	castIntermediateMagic(std::make_unique<FireMagic>());
	castIntermediateMagic(std::make_unique<WaterMagic>());
	castIntermediateMagic(std::make_unique<WindMagic>());
	castIntermediateMagic(std::make_unique<EarthMagic>());

	// 上級魔法
	std::cout << "<上級魔法>" << std::endl;
	castAdvancedMagic(std::make_unique<FireMagic>());
	castAdvancedMagic(std::make_unique<WaterMagic>());
	castAdvancedMagic(std::make_unique<WindMagic>());
	castAdvancedMagic(std::make_unique<EarthMagic>());

	// 任意のクラスの魔法を呼ぶ
	std::cout << "<好きな魔法を呼ぶ>" << std::endl;
	castMagic(std::make_unique<FireMagic>(), std::make_unique<AdvancedMagic>());
	castMagic(std::make_unique<EarthMagic>(), std::make_unique<IntermediateMagic>());

	return 0;
}