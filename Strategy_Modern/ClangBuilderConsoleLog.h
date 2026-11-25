#pragma once
#include "ClangBuilder.h"

class ClangBuilderConsoleLog
{
public:
	ClangBuilderConsoleLog() = default;
	~ClangBuilderConsoleLog() = default;
	void operator()(const ClangBuilder& builder);
};

