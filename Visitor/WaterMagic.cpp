#include "WaterMagic.h"
#include "MagicVisitor.h"

namespace visitor
{
	WaterMagic::WaterMagic()
		: Magic()
	{

	}

	WaterMagic::~WaterMagic()
	{

	}

	void WaterMagic::accept(const MagicVisitor& mv)
	{
		mv.visit(*this);
	}
}