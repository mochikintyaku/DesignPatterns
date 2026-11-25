#pragma once
#include "MagicRankVisitor.h"

namespace visitor
{
    class FireMagic :
        public MagicRankVisitor
    {
    public:
        FireMagic();
        ~FireMagic();
        void visit(const BeginnerMagic&) const;     // override
        void visit(const IntermediateMagic&) const; // override
        void visit(const AdvancedMagic&) const;     // override
    };
}