#pragma once
#include "IShogiCommand.h"

#include <memory>
#include <stack>

class ShogiCommandManager
{
public:
	ShogiCommandManager() = default;
	~ShogiCommandManager() = default;
	void invoke(std::unique_ptr<IShogiCommand> command);
	void undoLast();

private:
	typedef std::stack<std::unique_ptr<IShogiCommand>> CommandStack;

	CommandStack stack_;
};

