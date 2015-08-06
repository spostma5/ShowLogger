#pragma once
#include<string>
#include<vector>
#include "Episode.h"

class Show
{
public:
	Show();
	Show(const std::string& name);

	void addEpisode(const std::string& name, bool watched = false);

	std::string				getName() const;
	std::vector<Episode>	getEpisodes() const;

	void					setName(const std::string& name);

	~Show();
private:
	std::string mName;
	std::vector<Episode> mEpisodes;
};

