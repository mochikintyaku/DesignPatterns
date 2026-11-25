#pragma once
#include "OutputLogStrategy.h"

class GCCBuilder;

class GCCBuilderFileLog :
    public OutputLogStrategy<GCCBuilder>
{
public:
    GCCBuilderFileLog();
    ~GCCBuilderFileLog();
    void outputLog(const GCCBuilder& builder);
};

