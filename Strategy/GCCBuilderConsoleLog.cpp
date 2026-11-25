#include "GCCBuilderConsoleLog.h"

#include <iostream>

GCCBuilderConsoleLog::GCCBuilderConsoleLog() {};

GCCBuilderConsoleLog::~GCCBuilderConsoleLog() {};

void GCCBuilderConsoleLog::outputLog(const GCCBuilder& builder)
{
	std::cout << "GCCBuilder : コンソールにログを出力するぜよ。" << std::endl;
}
