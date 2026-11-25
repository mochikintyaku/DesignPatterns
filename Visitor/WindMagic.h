#pragma once
#include "Magic.h"

namespace visitor
{
    class MagicVisitor;

    class WindMagic :
        public Magic
    {
    public:
        WindMagic();
        ~WindMagic();
        void accept(const MagicVisitor&);      // override
    };
}