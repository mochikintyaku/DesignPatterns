#include "GCCBuilderConsoleLog.h"
#include <iostream>

void GCCBuilderConsoleLog::operator()(const GCCBuilder& builder)
{
	std::cout << "GCCBuilder : ログをファイルに出力するぜよ（Modern）" << std::endl;
}
