#include "EarthMagic.h"
#include "MagicVisitor.h"

namespace visitor
{
	EarthMagic::EarthMagic()
		: Magic()
	{

	}

	EarthMagic::~EarthMagic()
	{

	}

	void EarthMagic::accept(const MagicVisitor& mv)
	{
		mv.visit(*this);
	}

	/*void EarthMagic::visit(const BeginnerMagic& bm)
	{
		std::cout << "“y‚Ì‰‹‰–‚–@F\"»‚©‚¯\"  –Ú‚É“ü‚Á‚½‚ç’n–¡‚É’É‚¢I" << std::endl;
	}

	void EarthMagic::visit(const IntermediateMagic& im)
	{
		std::cout << "“y‚Ì’†‹‰–‚–@F\"—Ž‚Æ‚µŒŠ\"  ‚Ç‚±‚É‚ ‚é‚©•ª‚©‚é‚©‚ÈH" << std::endl;
	}

	void EarthMagic::visit(const AdvancedMagic& am)
	{
		std::cout << "“y‚Ìã‹‰–‚–@F\"’nk\"  ƒKƒ^ƒKƒ^k‚¦‚Ä—§‚Á‚Ä‚¢‚ç‚ê‚È‚¢" << std::endl;
	}*/
}