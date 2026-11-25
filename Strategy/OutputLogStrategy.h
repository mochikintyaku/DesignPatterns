#pragma once
template<typename T>
class OutputLogStrategy
{
public:
	OutputLogStrategy() = default;
	virtual ~OutputLogStrategy() {};
	virtual void outputLog(const T& builder) = 0;
};

