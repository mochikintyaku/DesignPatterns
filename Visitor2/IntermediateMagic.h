#pragma once
#include "MagicRank.h"

namespace visitor
{
    class IntermediateMagic :
        public MagicRank
    {
    public:
        IntermediateMagic();
        ~IntermediateMagic();
        void accept(const MagicRankVisitor&); // override
    };
}