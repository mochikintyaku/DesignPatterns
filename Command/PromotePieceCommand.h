#pragma once
#include "IShogiCommand.h"
#include "Position.h"
#include "ShogiParam.h"

class PromotePieceCommand :
    public IShogiCommand
{
public:
    PromotePieceCommand(PieceType piece, Position from);
    ~PromotePieceCommand() = default;
    void execute(); // override
    void undo();    // override
private:
    PieceType piece_;
    Position from_;
};

