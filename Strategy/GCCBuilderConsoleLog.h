#pragma once
#include "OutputLogStrategy.h"

class GCCBuilder;

class GCCBuilderConsoleLog :
    public OutputLogStrategy<GCCBuilder>
{
public:
    GCCBuilderConsoleLog();
    ~GCCBuilderConsoleLog();
    void outputLog(const GCCBuilder& builder);
};

