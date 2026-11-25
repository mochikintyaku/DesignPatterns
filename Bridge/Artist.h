#pragma once
#include "Writer.h"
class Artist :
    public Writer
{
public:
    explicit Artist();
    virtual ~Artist();
    virtual void write();
};

