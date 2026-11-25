#pragma once
#include "IShogiCommand.h"
#include "Position.h"
#include "ShogiParam.h"

class MovePieceCommand :
    public IShogiCommand
{
public:
    MovePieceCommand(PieceType piece, Position from, Position to);
    ~MovePieceCommand() = default;
    void execute(); // override
    void undo();    // override
private:
    PieceType piece_;
    Position from_;
    Position to_;
};

