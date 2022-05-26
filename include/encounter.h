/***********************************************************************
*
*  File: encounter.h
*
*  Description: This file contains the encounter class which is used
*               to generate all of the "encounters" (text events)
*               that occur durring the game.
*
*  Author: Michael Vallee
*
*  Last Modified: 5/26/2022
*
***********************************************************************/


#ifndef ENCOUNTER
#define ENCOUNTER

//Standard Libraries
#include <iostream>
#include <string>
#include <vector>
//Header Files
#include "choice.h"


using namespace std;

class encounter {

public:

	//constructor
	encounter(vector<choice> c) {
		_choices = c;
	}

	//overloaded operator to read in choices
	//friend istream& operator >>(choice& x, encounter& y) { input(x, y); }

	//function called in >> operator
	void input(choice& x, encounter& y) {}

private:

	encounter() {}   //default constructor

	std::vector<choice> _choices;   //a vector containing all of the possible choices that a
		                       // player can make at this encounter 

};

#endif //ENCOUNTER