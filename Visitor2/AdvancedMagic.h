#pragma once
#include "MagicRank.h"

namespace visitor
{
    class AdvancedMagic :
        public MagicRank
    {
    public:
        AdvancedMagic();
        ~AdvancedMagic();
        void accept(const MagicRankVisitor&); // override
    };
}