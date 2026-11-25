#include "Magic.h"
#include "FireMagic.h"
#include "WaterMagic.h"
#include <iostream>

void castFireMagic(const visitor::Magic& magic)
{
	std::visit(visitor::FireMagic(), magic);
}

void castWaterMagic(const visitor::Magic& magic)
{
	std::visit(visitor::WaterMagic(), magic);
}

int main()
{
	using namespace visitor;

	std::cout << "----‰Î‚Ì–‚–@----" << std::endl;
	castFireMagic(BeginnerMagic());
	castFireMagic(IntermediateMagic());
	castFireMagic(AdvancedMagic());

	std::cout << "----…‚Ì–‚–@----" << std::endl;
	castWaterMagic(BeginnerMagic());
	castWaterMagic(IntermediateMagic());
	castWaterMagic(AdvancedMagic());

	return 0;
}