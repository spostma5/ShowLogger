#include "Show.h"

Show::Show() : Show("empty_name") { }

Show::Show(const std::string& name) 
	: mName(name) { }

void Show::addEpisode(const std::string& name, bool watched)
{
	mEpisodes.push_back(Episode(name,watched));
}

std::string Show::getName()					const { return mName; }
std::vector<Episode> Show::getEpisodes()	const { return mEpisodes; }

void Show::setName(const std::string& name) { mName = name; }

Show::~Show()
{
}
