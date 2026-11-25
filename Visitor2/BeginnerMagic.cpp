#include "BeginnerMagic.h"
#include "MagicRankVisitor.h"

namespace visitor
{
	BeginnerMagic::BeginnerMagic()
		: MagicRank()
	{

	}

	BeginnerMagic::~BeginnerMagic()
	{

	}

	void BeginnerMagic::accept(const MagicRankVisitor& mr)
	{
		mr.visit(*this);
	}
}