#include "AdvancedMagic.h"
#include "FireMagic.h"
#include "WaterMagic.h"
#include "WindMagic.h"
#include "EarthMagic.h"
#include <iostream>

namespace visitor
{
	AdvancedMagic::AdvancedMagic()
		: MagicVisitor()
	{

	}

	AdvancedMagic::~AdvancedMagic()
	{

	}

	void AdvancedMagic::visit(const FireMagic& fm) const
	{
		std::cout << "‰Î‚Ìã‹‰–‚–@:\"ƒGƒNƒXƒvƒ[ƒWƒ‡ƒ“\"  Œ|p‚Í”š”­‚¾" << std::endl;
	}

	void AdvancedMagic::visit(const WaterMagic& wm) const
	{
		std::cout << "…‚Ìã‹‰–‚–@F\"’Ã”g\"  ‚È‚ß‚Ä‚©‚©‚é‚Æ“M‚ê‚é‚º" << std::endl;
	}

	void AdvancedMagic::visit(const WindMagic& wm) const
	{
		std::cout << "•—‚Ìã‹‰–‚–@F\"ƒnƒŠƒP[ƒ“\"  •—‚Å‚Á”ò‚Î‚³‚ê‚é‚È‚æ" << std::endl;
	}

	void AdvancedMagic::visit(const EarthMagic& em) const
	{
		std::cout << "“y‚Ìã‹‰–‚–@F\"’nk\"  ƒKƒ^ƒKƒ^k‚¦‚Ä—§‚Á‚Ä‚¢‚ç‚ê‚È‚¢" << std::endl;
	}
}
