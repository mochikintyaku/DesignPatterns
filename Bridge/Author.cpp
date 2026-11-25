#include "Author.h"
#include "BluePen.h"

Author::Author()
	: Writer(std::make_unique<BluePen>())
{ }

Author::~Author() {}

void Author::write()
{
	getPen()->write("‰´‚Íì‰ÆI‘S‰´‚ª†‹ƒ‚·‚é¬à‚ğ‘‚­‚ºI");
}