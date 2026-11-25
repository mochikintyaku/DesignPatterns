#pragma once
#include "Magic.h"
#include <iostream>

namespace visitor
{
	struct WaterMagic
	{
		void operator()(const BeginnerMagic& bm) const
		{
			std::cout << "…‚Ì‰‹‰–‚–@F\"…“S–C\"  Šç‚É‚©‚©‚é‚Æ‹CŽ‚¿‚¢‚º" << std::endl;
		}

		void operator()(const IntermediateMagic& im) const
		{
			std::cout << "…‚Ì’†‹‰–‚–@F\"ƒv[ƒ‹\"  ‰j‚®‚Æ‹CŽ‚¿‚¢‚¢‚º" << std::endl;
		}

		void operator()(const AdvancedMagic& am) const
		{
			std::cout << "…‚Ìã‹‰–‚–@F\"’Ã”g\"  ‚È‚ß‚Ä‚©‚©‚é‚Æ“M‚ê‚é‚º" << std::endl;
		}
	};
}
