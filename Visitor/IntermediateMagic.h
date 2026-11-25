#pragma once
#include "MagicVisitor.h"

namespace visitor
{
    class FireMagic;
    class WaterMagic;
    class WindMagic;
    class EarthMagic;

    class IntermediateMagic :
        public MagicVisitor
    {
    public:
        IntermediateMagic();
        ~IntermediateMagic();
        void visit(const FireMagic&) const;  // override
        void visit(const WaterMagic&) const; // override
        void visit(const WindMagic&) const;  // override
        void visit(const EarthMagic&) const; // override
    };
}