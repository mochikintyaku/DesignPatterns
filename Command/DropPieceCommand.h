#pragma once
#include "IShogiCommand.h"
#include "Position.h"
#include "ShogiParam.h"

class DropPieceCommand :
    public IShogiCommand
{
public:
    DropPieceCommand(PieceType piece, Position to);
    ~DropPieceCommand() = default;
    void execute();  // override
    void undo();     // override

private:
    PieceType piece_;
    Position to_;
};

