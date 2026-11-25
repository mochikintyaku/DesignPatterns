#include "Artist.h"
#include "RedPen.h"

Artist::Artist()
	:Writer(std::make_unique<RedPen>())
{
}

Artist::~Artist()
{ 
}

void Artist::write()
{
	getPen()->write("‰´‚ÍŒ|p‰ÆIŒ|p‚Í”š”­‚¾I");
}