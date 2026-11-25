#pragma once
#include "Strategy/Builder.h"
#include <functional>

class ClangBuilder
	:public Builder
{
public:
	typedef std::function<void(const ClangBuilder&)> OutputLogStrategy;

	explicit ClangBuilder(OutputLogStrategy logger);
	~ClangBuilder() = default;
	void outputLog();

private:
	OutputLogStrategy logger_;
};