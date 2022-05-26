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
*  Last Modified: 5/26/2022
*
***********************************************************************/


#ifndef CHOICE
#define CHOICE

//Standard Libraries
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class choice {

public:

	//constructor
	choice(std::string text) {
		_text = text;
	}

	//overloaded operator to read in text
	//friend istream& operator >>(istream& ins, choice& x) { input(ins, x); }

	//function called in >> operator
	void input(istream& ins, choice& x) {}

private:

	choice() {}   //default constructor

	std::string _text;   //contains the text displayed for this choice

};

#endif