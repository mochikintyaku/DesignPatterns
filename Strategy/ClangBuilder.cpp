#include "ClangBuilder.h"

#include <iostream>

ClangBuilder::ClangBuilder(std::unique_ptr<OutputLogStrategy<ClangBuilder>> logger)
	: logger_(std::move(logger))
	{ }

ClangBuilder::~ClangBuilder() {};

void ClangBuilder::outputLog()
{
	logger_->outputLog(*this);
}

void ClangBuilder::setLogger(std::unique_ptr<OutputLogStrategy<ClangBuilder>> logger)
{
	logger_ = std::move(logger);
}