#include "GCCBuilderFileLog.h"

#include <iostream>

GCCBuilderFileLog::GCCBuilderFileLog() {};

GCCBuilderFileLog::~GCCBuilderFileLog() {};

void GCCBuilderFileLog::outputLog(const GCCBuilder& builder)
{
	std::cout << "GCCBuilder : ファイルにログを出力するぜよ。" << std::endl;
}