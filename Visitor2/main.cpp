// 魔法のランクがクローズドセットで
// 魔法の属性（型）がオープンセット
#include "BeginnerMagic.h"
#include "IntermediateMagic.h"
#include "AdvancedMagic.h"
#include "FireMagic.h"
#include "WaterMagic.h"
#include <memory>
#include <iostream>

void castFireMagic(std::unique_ptr<visitor::MagicRank> mr)
{
	mr->accept(visitor::FireMagic());
}

void castWaterMagic(std::unique_ptr<visitor::MagicRank> mr)
{
	mr->accept(visitor::WaterMagic());
}

int main()
{
	using namespace visitor;

	std::cout << "----火の魔法一覧----" << std::endl;
	castFireMagic(std::make_unique<BeginnerMagic>());
	castFireMagic(std::make_unique<IntermediateMagic>());
	castFireMagic(std::make_unique<AdvancedMagic>());

	std::cout << "----水の魔法一覧----" << std::endl;
	castWaterMagic(std::make_unique<BeginnerMagic>());
	castWaterMagic(std::make_unique<IntermediateMagic>());
	castWaterMagic(std::make_unique<AdvancedMagic>());

	return 0;
}