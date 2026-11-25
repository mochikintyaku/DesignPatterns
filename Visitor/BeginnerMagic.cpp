#include "BeginnerMagic.h"
// この実装では、クラスのメンバにアクセスしないので、BeginnerMagic.hでの前方宣言だけで
// コンパイルが通ると思うが、実践ではメンバにアクセスすることは十分考えられる。
// 従って、ヘッダーのインクルードも書いておくことにする
#include "FireMagic.h"
#include "WaterMagic.h"
#include "WindMagic.h"
#include "EarthMagic.h"
#include <iostream>

namespace visitor
{
	BeginnerMagic::BeginnerMagic()
		: MagicVisitor()
	{

	}

	BeginnerMagic::~BeginnerMagic()
	{

	}

	void BeginnerMagic::visit(const FireMagic& fm) const
	{
		std::cout << "火の初級魔法：\"マッチ\"  ほんのり暖かいぜ" << std::endl;
	}

	void BeginnerMagic::visit(const WaterMagic& wm) const
	{
		std::cout << "水の初級魔法：\"水鉄砲\"  顔にかかると気持ちいぜ" << std::endl;
	}

	void BeginnerMagic::visit(const WindMagic& wm) const
	{
		std::cout << "風の初級魔法：\"そよ風\"  ちょっぴり風を感じるぜ" << std::endl;
	}

	void BeginnerMagic::visit(const EarthMagic& em) const
	{
		std::cout << "土の初級魔法：\"砂かけ\"  目に入ったら地味に痛い！" << std::endl;
	}
}
