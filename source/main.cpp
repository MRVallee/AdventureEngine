/***********************************************************************
*
*  File: main.cpp
*
*  Description: This file contains the main program.  All of the code
*               written is put to use in this file for the executible.
*
*  Author: Michael Vallee
*
*  Last Modified: 8/14/2020
*
***********************************************************************/

#include "library.h"

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