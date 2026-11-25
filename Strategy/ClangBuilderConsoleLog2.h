#pragma once
#include <iostream>

struct ClangBuilderConsoleLog2
{
    template<typename BUILDER>
    void operator()(const BUILDER& builder)
    {
        std::cout << "ClangBuilder2 : ログをコンソールに出力するってばよ。" << std::endl;
    }
};