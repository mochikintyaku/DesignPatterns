#include "ShogiCommandManager.h"

void ShogiCommandManager::invoke(std::unique_ptr<IShogiCommand> command)
{
	command->execute();
	stack_.push(std::move(command));
}

void ShogiCommandManager::undoLast()
{
	if (stack_.empty())
		return;

	auto command = std::move(stack_.top());
	stack_.pop();

	command->undo();
}
