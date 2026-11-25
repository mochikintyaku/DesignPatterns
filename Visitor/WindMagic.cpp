#include "WindMagic.h"
#include "MagicVisitor.h"

namespace visitor
{
	WindMagic::WindMagic()
		: Magic()
	{

	}

	WindMagic::~WindMagic()
	{

	}

	void WindMagic::accept(const MagicVisitor& mv)
	{
		mv.visit(*this);
	}

	/*void WindMagic::visit(const BeginnerMagic& bm)
	{
		std::cout << "風の初級魔法：\"そよ風\"  ちょっぴり風を感じるぜ" << std::endl;
	}

	void WindMagic::visit(const IntermediateMagic& im)
	{
		std::cout << "風の中級魔法：\"鎌鼬\"  見えない刃に気をつけな☆" << std::endl;
	}

	void WindMagic::visit(const AdvancedMagic& am)
	{
		std::cout << "風の上級魔法：\"ハリケーン\"  風で吹っ飛ばされるなよ" << std::endl;
	}*/
}