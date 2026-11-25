#pragma once
#include <memory>

class IPen;

class Writer
{
private:
	std::unique_ptr<IPen> pImpl;
protected:
	explicit Writer(std::unique_ptr<IPen> pen) : pImpl(std::move(pen)) {};
	IPen* getPen() { return pImpl.get(); }
	IPen const* getPen() const { return pImpl.get(); }
public:
	virtual ~Writer() {};
	virtual void write() = 0;
};