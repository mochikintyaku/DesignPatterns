#include "AdvancedMagic.h"
#include "MagicRankVisitor.h"

namespace visitor
{
	AdvancedMagic::AdvancedMagic()
		: MagicRank()
	{

	}

	AdvancedMagic::~AdvancedMagic()
	{

	}

	void AdvancedMagic::accept(const MagicRankVisitor& v)
	{
		v.visit(*this);
	}
}