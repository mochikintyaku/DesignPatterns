#pragma once
#include "IPen.h"
class BluePen :
    public IPen
{
public:
    BluePen();
    ~BluePen();
    void write(std::string str);
};

