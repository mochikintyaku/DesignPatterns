#pragma once

namespace visitor
{
	// これが書けている時点で、MagicRankの派生クラスはこの３つしかないと想定している（クローズドセット）
	class BeginnerMagic;
	class IntermediateMagic;
	class AdvancedMagic;


	// このクラスから派生したクラス（属性）は、その属性の初級～上級魔法を全て知っているクラスになる
	class MagicRankVisitor
	{
	public:
		MagicRankVisitor() = default;
		virtual ~MagicRankVisitor() = default;
		virtual void visit(const BeginnerMagic&) const = 0;
		virtual void visit(const IntermediateMagic&) const = 0;
		virtual void visit(const AdvancedMagic&) const = 0;
	};
}