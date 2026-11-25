#include "ClangBuilder.h"

ClangBuilder::ClangBuilder(OutputLogStrategy logger)
	:logger_(std::move(logger))
{}

void ClangBuilder::outputLog()
{
	logger_(*this);
}