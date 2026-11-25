#pragma once
class Builder
{
public:
	Builder() = default;
	virtual ~Builder() = default;
	virtual void outputLog() = 0;
};