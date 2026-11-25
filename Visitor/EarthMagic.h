#pragma once
#include "Magic.h"

namespace visitor
{
    class EarthMagic :
        public Magic
    {
    public:
        EarthMagic();
        ~EarthMagic();
        void accept(const MagicVisitor&);  // override
    };
}