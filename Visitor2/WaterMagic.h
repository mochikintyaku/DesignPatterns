#pragma once
#include "MagicRankVisitor.h"

namespace visitor
{
    class WaterMagic :
        public MagicRankVisitor
    {
    public:
        WaterMagic();
        ~WaterMagic();
        void visit(const BeginnerMagic&) const;     // override
        void visit(const IntermediateMagic&) const; // override
        void visit(const AdvancedMagic&) const;     // override
    };
}