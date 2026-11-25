#include "MovePieceCommand.h"

#include <iostream>

MovePieceCommand::MovePieceCommand(PieceType piece, Position from, Position to)
	: piece_(piece), from_(from), to_(to)
{ }

void MovePieceCommand::execute()
{
	std::cout << from_ << "‚Ì" << toKanji(piece_) << "‚ð" << to_ << "‚ÉˆÚ“®" << std::endl;
}

void MovePieceCommand::undo()
{
	std::cout << to_ << "‚Ì" << toKanji(piece_) << "‚ð" << from_ << "‚É–ß‚·" << std::endl;
}