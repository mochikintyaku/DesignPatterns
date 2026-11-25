#pragma once

namespace visitor
{
	class MagicVisitor;

	class Magic
	{
	public:
		Magic() = default;
		virtual ~Magic() = default;
		virtual void accept(const MagicVisitor&) = 0;
	};
}