#pragma once

namespace visitor
{
	class FireMagic;
	class WaterMagic;
	class WindMagic;
	class EarthMagic;

	// １つのテーマに関して、全ての属性（型）の処理を知っているクラス
	// テーマごとにこのクラスから派生させることで、処理の追加が容易になる
	class MagicVisitor
	{
	public:
		MagicVisitor() = default;
		virtual ~MagicVisitor() = default;
		virtual void visit(const FireMagic&) const = 0;
		virtual void visit(const WaterMagic&) const = 0;
		virtual void visit(const WindMagic&) const = 0;
		virtual void visit(const EarthMagic&) const = 0;
	};
}