#pragma once
#include<string>

class Episode
{
public:
	Episode();
	Episode(const std::string& name, bool watched = false);

	std::string		getName()		const;
	bool			getWatched()	const;

	void			setName(const std::string& name);
	void			setWatched(const bool& watched);

	~Episode();
private:
	std::string mName;
	bool mWatched;
};

