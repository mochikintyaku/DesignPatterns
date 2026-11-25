#pragma once
#include "Magic.h"

namespace visitor
{
    class WaterMagic :
        public Magic
    {
    public:
        WaterMagic();
        ~WaterMagic(); // override
        void accept(const MagicVisitor&); // override
    };
}