#include "ShogiCommandManager.h"
#include "MovePieceCommand.h"
#include "DropPieceCommand.h"
#include "PromotePieceCommand.h"
#include "ShogiParam.h"

int main()
{
	ShogiCommandManager manager;

	auto cm1 = std::make_unique<MovePieceCommand>(Fu, Position(7, 7), Position(7, 6));
	auto cm2 = std::make_unique<MovePieceCommand>(Fu, Position(8, 3), Position(8, 4));
	auto cm3 = std::make_unique<PromotePieceCommand>(Gin, Position(5, 3));
	auto cm4 = std::make_unique<DropPieceCommand>(Kaku, Position(7, 1));

	manager.invoke(std::move(cm1));
	manager.invoke(std::move(cm2));
	manager.invoke(std::move(cm3));
	manager.invoke(std::move(cm4));
	manager.undoLast();
	manager.undoLast();
	manager.undoLast();
	manager.undoLast();

	return 0;
}