#pragma once
#include "Strategy\Builder.h"
#include <functional>

class GCCBuilder :
    public Builder
{
public:
    typedef std::function<void(const GCCBuilder&)> OutputLogStrategy;

    explicit GCCBuilder(OutputLogStrategy logger);
    ~GCCBuilder() = default;
    void outputLog();

private:
    OutputLogStrategy logger_;
};

