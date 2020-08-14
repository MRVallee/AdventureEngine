/***********************************************************************
*
*  File: window.h
*
*  Description: This file is used for the PDCurses window initialization
*               and all functions associated with that.
*
*  Author: Michael Vallee
*
*  Last Modified: 8/14/2020
*
***********************************************************************/

#ifndef WINDOW
#define WINDOW

#include "library.h"

using namespace std;

class window {

public:

	//creates window
	void Initialize() {
		initscr();
		noecho();
	}

	//finds current window size
	void GetSize() {
		getmaxyx(stdscr, y_max, x_max);
	}

	//kills window
	void Kill() {
		endwin();
	}

	//default constructor
	window() {}

private:

	//These are the window size parameters
	int x_max;
	int y_max;

};

#endif //WINDOW