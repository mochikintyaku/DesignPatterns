#include "ClangBuilderConsoleLog.h"
#include <iostream>

void ClangBuilderConsoleLog::operator()(const ClangBuilder& builder)
{
	std::cout << "ClangBuilder : ログをファイルに出力するよ（Modern）" << std::endl;
}
