#include "IntermediateMagic.h"
#include "MagicRankVisitor.h"

namespace visitor
{
	IntermediateMagic::IntermediateMagic()
		: MagicRank()
	{

	}

	IntermediateMagic::~IntermediateMagic()
	{

	}

	void IntermediateMagic::accept(const MagicRankVisitor& v)
	{
		v.visit(*this);
	}
}
