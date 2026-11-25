#pragma once
#include "OutputLogStrategy.h"

class ClangBuilder;

class ClangBuilderFileLog :
    public OutputLogStrategy<ClangBuilder>
{
public:
    ClangBuilderFileLog();
    ~ClangBuilderFileLog();
    void outputLog(const ClangBuilder& builder);
};

