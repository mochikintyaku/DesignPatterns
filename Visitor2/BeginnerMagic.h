#pragma once
#include "MagicRank.h"

namespace visitor
{
    class BeginnerMagic :
        public MagicRank
    {
    public:
        BeginnerMagic();
        ~BeginnerMagic();
        void accept(const MagicRankVisitor&); // override
    };
}