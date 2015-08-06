#pragma once
#include <vector>
#include "Show.h"
class ConsoleUI
{
public:
	ConsoleUI();

	void run();

	~ConsoleUI();
private:
	bool mDone;
	std::vector<Show> mShows;

	int getMainMenu() const;
	Show getAddShow() const;
	int getViewShows() const;
	void runShowMenu(Show& show);
};

