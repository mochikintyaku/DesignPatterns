#include "DropPieceCommand.h"

#include <iostream>

DropPieceCommand::DropPieceCommand(PieceType piece, Position to)
	:piece_(piece), to_(to)
{ }

void DropPieceCommand::execute()
{
	std::cout << toKanji(piece_) << "‚ð" << to_ << "‚É‘Å‚Â" << std::endl;
}

void DropPieceCommand::undo()
{
	std::cout << to_ << "‚Ì" << toKanji(piece_) << "‚ð‹î‘ä‚É–ß‚·" << std::endl;
}