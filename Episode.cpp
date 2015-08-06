#include "Episode.h"


Episode::Episode()
	: Episode("empty_name") { }

Episode::Episode(const std::string& name, bool watched)
	: mName(name), mWatched(watched) { }

std::string		Episode::getName()		const { return mName; }
bool			Episode::getWatched()	const { return mWatched; }

void			Episode::setName(const std::string& name) { mName = name; }
void			Episode::setWatched(const bool& watched)  { mWatched = watched; }

Episode::~Episode()
{
}
