#include "ClangBuilderFileLog.h"

#include <iostream>

ClangBuilderFileLog::ClangBuilderFileLog() {};
ClangBuilderFileLog::~ClangBuilderFileLog() {};

void ClangBuilderFileLog::outputLog(const ClangBuilder& builder)
{
	std::cout << "ClangBuilder : ファイルにログを出力します。" << std::endl;
}
