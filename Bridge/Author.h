#pragma once
#include "Writer.h"
class Author :
    public Writer
{
public:
    Author();
    virtual ~Author();
    virtual void write();
};

