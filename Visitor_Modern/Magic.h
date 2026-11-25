#pragma once
#include "BeginnerMagic.h"
#include "IntermediateMagic.h"
#include "AdvancedMagic.h"
#include <variant>

namespace visitor
{
	typedef std::variant<BeginnerMagic, IntermediateMagic, AdvancedMagic> Magic;
}
