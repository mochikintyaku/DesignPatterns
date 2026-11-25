#pragma once
#include "Magic.h"

namespace visitor
{
    class FireMagic :
        public Magic
    {
    public:
        FireMagic();
        ~FireMagic();
        void accept(const MagicVisitor&); // override
    };
}