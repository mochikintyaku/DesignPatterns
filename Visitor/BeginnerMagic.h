#pragma once
#include "MagicVisitor.h"

namespace visitor
{
    // 全ての属性（型）の初級魔法を知っているクラス
    class BeginnerMagic :
        public MagicVisitor
    {
    public:
        BeginnerMagic();
        ~BeginnerMagic();
        void visit(const FireMagic&) const;  // override
        void visit(const WaterMagic&) const; // override
        void visit(const WindMagic&) const;  // override
        void visit(const EarthMagic&) const; // override
    };
}