#pragma once
#include "Builder.h"
#include "OutputLogStrategy.h"

#include <memory>

class GCCBuilder :
    public Builder
{
public:
    GCCBuilder(std::unique_ptr<OutputLogStrategy<GCCBuilder>> logger);
    ~GCCBuilder();
    void outputLog();
    void setLogger(std::unique_ptr<OutputLogStrategy<GCCBuilder>> logger);

private:
    std::unique_ptr<OutputLogStrategy<GCCBuilder>> logger_;
};

