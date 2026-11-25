#include "GCCBuilder.h"

#include <iostream>

GCCBuilder::GCCBuilder(std::unique_ptr<OutputLogStrategy<GCCBuilder>> logger)
	: logger_(std::move(logger))
{ }

GCCBuilder::~GCCBuilder() {};

void GCCBuilder::outputLog()
{
	logger_->outputLog(*this);
}

void GCCBuilder::setLogger(std::unique_ptr<OutputLogStrategy<GCCBuilder>> logger)
{
	logger_ = std::move(logger);
}