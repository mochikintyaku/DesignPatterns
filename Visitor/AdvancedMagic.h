#pragma once
#include "MagicVisitor.h"

namespace visitor
{
    class FireMagic;
    class WaterMagic;
    class WindMagic;
    class EarthMagic;

    class AdvancedMagic :
        public MagicVisitor
    {
    public:
        AdvancedMagic();
        ~AdvancedMagic();
        void visit(const FireMagic&) const;  // override
        void visit(const WaterMagic&) const; // override
        void visit(const WindMagic&) const;  // override
        void visit(const EarthMagic&) const; // override
    };
}