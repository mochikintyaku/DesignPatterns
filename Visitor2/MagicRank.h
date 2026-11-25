#pragma once

namespace visitor
{
	class MagicRankVisitor;

	class MagicRank
	{
	public:
		MagicRank() = default;
		virtual ~MagicRank() = default;
		virtual void accept(const MagicRankVisitor&) = 0;
	};
}
