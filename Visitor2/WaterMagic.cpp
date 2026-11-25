#include "WaterMagic.h"
#include "BeginnerMagic.h"
#include "IntermediateMagic.h"
#include "AdvancedMagic.h"
#include <iostream>

namespace visitor
{
	WaterMagic::WaterMagic()
		: MagicRankVisitor()
	{

	}

	WaterMagic::~WaterMagic()
	{

	}

	void WaterMagic::visit(const BeginnerMagic& bm) const
	{
		std::cout << "…‚Ì‰‹‰–‚–@F\"…“S–C\"  Šç‚É‚©‚©‚é‚Æ‹CŽ‚¿‚¢‚º" << std::endl;
	}

	void WaterMagic::visit(const IntermediateMagic& im) const
	{
		std::cout << "…‚Ì’†‹‰–‚–@F\"ƒv[ƒ‹\"  ‰j‚®‚Æ‹CŽ‚¿‚¢‚¢‚º" << std::endl;
	}

	void WaterMagic::visit(const AdvancedMagic& am) const
	{
		std::cout << "…‚Ìã‹‰–‚–@F\"’Ã”g\"  ‚È‚ß‚Ä‚©‚©‚é‚Æ“M‚ê‚é‚º" << std::endl;
	}
}