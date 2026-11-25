#pragma once
#include "OutputLogStrategy.h"

class ClangBuilder; 
// outputLog()の実装でClangBuilderのメンバにアクセスするようならClangBuilder.hのインクルードが必用
// 今回は引数に型を書けるようにしたいだけなので前方宣言で済む

class ClangBuilderConsoleLog :
    public OutputLogStrategy<ClangBuilder>
{
public:
    ClangBuilderConsoleLog();
    ~ClangBuilderConsoleLog();
    void outputLog(const ClangBuilder& builder);
};

