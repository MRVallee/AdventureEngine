/***********************************************************************
*
*  File: main.cpp
*
*  Description: This file contains the main program.  All of the code
*               written is put to use in this file for the executible.
*
*  Author: Michael Vallee
*
*  Last Modified: 5/26/2022
*
***********************************************************************/

//Standard Libraries
#include <iostream>
#include <string>
#include <vector>
//Additional Libraries
#include "curses.h"
//Header Files
#include "choice.h"
#include "encounter.h"
#include "item.h"
#include "player.h"
#include "window.h"

using namespace std;

int main() {

	window game;
	player you;

	game.Initialize();
	you.Generate();
	you.Character();
	game.Kill();

	return 0;

}