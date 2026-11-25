#pragma once
#include "GCCBuilder.h"

class GCCBuilderConsoleLog
{
public:
	GCCBuilderConsoleLog() = default;
	~GCCBuilderConsoleLog() = default;
	void operator()(const GCCBuilder& builder);
};

