#pragma once
#include "Builder.h"
#include "OutputLogStrategy.h"

#include <memory>

class ClangBuilder : public Builder
{
public:
	ClangBuilder(std::unique_ptr<OutputLogStrategy<ClangBuilder>> logger);
	~ClangBuilder();
	void outputLog();
	void setLogger(std::unique_ptr<OutputLogStrategy<ClangBuilder>> logger);

private:
	std::unique_ptr<OutputLogStrategy<ClangBuilder>> logger_;
};

