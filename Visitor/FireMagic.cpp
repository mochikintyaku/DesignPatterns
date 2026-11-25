#include "FireMagic.h"
#include "MagicVisitor.h"

namespace visitor
{
	FireMagic::FireMagic()
		:Magic()
	{

	}

	FireMagic::~FireMagic()
	{

	}

	void FireMagic::accept(const MagicVisitor& mv)
	{
		mv.visit(*this);
	}
}