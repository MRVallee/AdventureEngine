/***********************************************************************
*
*  File: choice.h
*
*  Description: This file contains the choice class which is used by
*               the encounter class.  This class stores an individual
*               choice that the player can make at any arbitrary
*               encounter.
*
*  Author: Michael Vallee
*
*  Last Modified: 4/28/2019
*
***********************************************************************/


#ifndef CHOICE
#define CHOICE

#include "library.h"

using namespace std;

class choice {

public:

	//constructor
	choice(string text) {
		_text = text;
	}

	//overloaded operator to read in text
	friend istream& operator >>(istream& ins, choice& x) { input(ins, x); }

	//function called in >> operator
	void input(istream& ins, choice& x);

private:

	choice() {}   //default constructor

	string _text;   //contains the text displayed for this choice

};

#endif