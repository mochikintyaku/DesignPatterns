#include "ClangBuilderConsoleLog.h"

#include <iostream>

ClangBuilderConsoleLog::ClangBuilderConsoleLog() {};

ClangBuilderConsoleLog::~ClangBuilderConsoleLog() {};

void ClangBuilderConsoleLog::outputLog(const ClangBuilder& builder)
{
	std::cout << "ClangBuilder : コンソールにログを出力します。" << std::endl;
}
