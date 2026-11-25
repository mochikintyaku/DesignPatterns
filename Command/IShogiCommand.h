#pragma once

class IShogiCommand
{
public:
	virtual ~IShogiCommand() = default;
	virtual void execute() = 0;
	virtual void undo() = 0;
};