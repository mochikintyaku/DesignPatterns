#pragma once
#include <string>

#include "IPen.h"
class RedPen :
    public IPen
{
public:
    RedPen();
    ~RedPen();
    void write(std::string str);
};

