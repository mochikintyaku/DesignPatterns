#include "GCCBuilder.h"

GCCBuilder::GCCBuilder(OutputLogStrategy logger)
	:logger_(std::move(logger))
{ }

void GCCBuilder::outputLog()
{
	logger_(*this);
}
