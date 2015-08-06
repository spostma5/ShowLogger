#include <iostream>
#include "ConsoleUI.h"
#include "Show.h"
using namespace std;

ConsoleUI::ConsoleUI()
	:mDone(false) { }

void ConsoleUI::run()
{
	while (!mDone)
	{
		int mainMenuResult = getMainMenu();

		switch (mainMenuResult)
		{
		case 1:
			mShows.push_back(getAddShow());
			break;
		case 2:
		{
			int viewShowIndex = getViewShows();
			if (--viewShowIndex < mShows.size())
			{
				runShowMenu(mShows[viewShowIndex]);
			}
			break;
		}
		case 3:
			mDone = true;
			break;
		}
	}
}

int ConsoleUI::getMainMenu() const
{
	int result = 3;

	system("cls");

	cout << "ShowLog Main Menu" << endl;
	cout << "-----------------" << endl;
	cout << "1. Add show" << endl;
	cout << "2. View shows" << endl;
	cout << "3. Exit" << endl << endl;
	cout << "--> ";
	cin >> result;

	return result;
}

Show ConsoleUI::getAddShow() const
{
	string name;

	system("cls");

	cout << "ShowLog Add Show Menu" << endl;
	cout << "-----------------" << endl;
	cout << "Enter show name: ";
	cin.ignore();
	getline(cin,name);

	return Show(name);
}

int ConsoleUI::getViewShows() const
{
	int result;
	int count = 1;

	system("cls");

	cout << "ShowLog View Shows Menu" << endl;
	cout << "-----------------" << endl;

	for (auto show : mShows)
	{
		cout << count++ << ". " << show.getName() << endl;
	}

	cout << count << ". Return to Main Menu" << endl;
	cout << endl << "-->";
	cin >> result;

	return result;
}

void ConsoleUI::runShowMenu(Show& show)
{
	bool inShowMenu = true;

	while (inShowMenu)
	{
		int result = 3;

		system("cls");

		cout << "ShowLog " << show.getName() << " Menu" << endl;
		cout << "-----------------" << endl;
		cout << "1. Add episode" << endl;
		cout << "2. View episodes" << endl;
		cout << "3. Return to Main Menu" << endl << endl;
		cout << "--> ";
		cin >> result;

		switch (result)
		{
		case 1:
			//TODO: ADD EPISODE MENU
			break;
		case 2:
			//TODO: VIEW EPISODE AND LINK TO MORE MENUS FOR CHANGING EPISODE INFORMATION
			break;
		case 3:
			inShowMenu = false;
			break;
		}
	}
}

ConsoleUI::~ConsoleUI()
{
}
