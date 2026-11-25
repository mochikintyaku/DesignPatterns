#include "PromotePieceCommand.h"

#include <iostream>

PromotePieceCommand::PromotePieceCommand(PieceType piece, Position from)
	:piece_(piece), from_(from)
{ }

void PromotePieceCommand::execute()
{
	std::cout << from_ << "‚Ì" << toKanji(piece_) << "‚ð¬‚ç‚¹‚éi— •Ô‚·j" << std::endl;
}

void PromotePieceCommand::undo()
{
	std::cout << from_ << "‚Ì" << toKanji(piece_) << "‚ð•\‚É–ß‚·" << std::endl;
}